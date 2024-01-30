@class SVXSessionManager, SVXClientServiceServer, AFAnalytics, SVXDeviceSetupManager, NSDictionary, AFPreferences, SVXModuleInstanceMap, AFInstanceContext, SVXSpeechSynthesizer;
@protocol SVXPrewarmHandling, SVXActivationHandling, SVXDeactivationHandling, SVXMyriadEventHandling;

@interface SVXVirtualDevice : NSObject {
    NSDictionary *_modulesByIdentifier;
    SVXModuleInstanceMap *_moduleInstanceMap;
    AFInstanceContext *_instanceContext;
    AFAnalytics *_analytics;
}

@property (readonly, nonatomic) id<SVXPrewarmHandling> prewarmHandler;
@property (readonly, nonatomic) id<SVXActivationHandling> activationHandler;
@property (readonly, nonatomic) id<SVXDeactivationHandling> deactivationHandler;
@property (readonly, nonatomic) SVXDeviceSetupManager *deviceSetupManager;
@property (readonly, nonatomic) SVXSessionManager *sessionManager;
@property (readonly, nonatomic) SVXSpeechSynthesizer *speechSynthesizer;
@property (readonly, nonatomic) SVXClientServiceServer *clientServiceServer;
@property (readonly, nonatomic) id<SVXMyriadEventHandling> myriadEventHandler;
@property (readonly, nonatomic) AFPreferences *preferences;

- (id)initWithInstanceContext:(id)a0;
- (void)stop;
- (id)description;
- (void).cxx_destruct;
- (void)_startWithModuleInstanceMap:(id)a0 platformDependencies:(id)a1;
- (void)_stopWithModuleInstanceMap:(id)a0;
- (void)startWithPlatformDependencies:(id)a0;

@end
