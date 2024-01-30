@class CDMXPCService, NSString, NSArray, CDMComposerService, CDMServiceGraphRunner, NSMutableDictionary, CDMAssetsManager, CDMDynamicConfig, NSObject, CDMConfig;
@protocol OS_dispatch_queue;

@interface CDMServiceCenter : NSObject <CDMServiceObserver> {
    CDMConfig *_config;
    NSArray *_services;
    NSArray *_dagServices;
    NSArray *_enabledDAGServices;
    NSArray *_foundationServices;
    CDMXPCService *_xpcService;
    CDMComposerService *_composerService;
    NSMutableDictionary *_commandServicesDict;
    id /* block */ _defaultCallback;
    int _maxSetupRetry;
    CDMServiceGraphRunner *_serviceGraphRunner;
    CDMAssetsManager *_cdmAssetsManager;
    NSObject<OS_dispatch_queue> *_cdmServiceSetupQueue;
    CDMDynamicConfig *_currentConfig;
    BOOL _enableSetAssetsProvisionalAndPromote;
}

@property (readonly, nonatomic) long long systemState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOnMainQueue;

- (void)cleanup;
- (void)setSystemState:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)smService:(id)a0 didPublishCommand:(id)a1;
- (void)smService:(id)a0 didPublishRequest:(id)a1 withResponseCallback:(id /* block */)a2;
- (id)getEnabledServices:(id)a0;
- (void)handleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)handleSetup:(id)a0 forCallback:(id /* block */)a1;
- (void)mergeConfig:(id)a0;
- (BOOL)setupAssets;
- (BOOL)isServiceNotReady:(id)a0 withServiceStateMap:(id)a1;
- (BOOL)promoteAssetsWithServiceState:(id)a0;
- (BOOL)setAssetsProvisional;
- (void)setupWithConfig:(id)a0;
- (BOOL)areAssetsAvailable:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (id)getServices;

@end
