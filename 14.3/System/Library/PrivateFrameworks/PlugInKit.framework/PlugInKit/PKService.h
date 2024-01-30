@class NSXPCListener, NSMutableDictionary, PKServicePersonality, NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, PKServiceDelegate;

@interface PKService : NSObject <NSXPCListenerDelegate>

@property unsigned int extensionPointPlatform;
@property (retain) NSXPCListener *serviceListener;
@property (retain) NSMutableDictionary *personalities;
@property (retain) PKServicePersonality *solePersonality;
@property (retain) NSObject<OS_dispatch_queue> *_sync;
@property (retain) NSArray *subsystems;
@property BOOL shared;
@property BOOL isSystemService;
@property (retain) NSObject<OS_dispatch_source> *terminationTimer;
@property (retain) NSObject<OS_dispatch_source> *firstHostRequestTimer;
@property (retain) id<PKServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)main;
+ (int)_defaultRun:(int)a0 arguments:(const char **)a1;
+ (id)defaultService;

- (void)checkIn;
- (void)run;
- (BOOL)unregisterPersonality:(id)a0;
- (id)personalityNamed:(id)a0;
- (id)configuredSubsystemList;
- (id)init;
- (void)beganUsingServicePersonality:(id)a0;
- (void).cxx_destruct;
- (void)checkEnvironment:(id)a0;
- (id)plugInPrincipalForPlugInNamed:(id)a0;
- (void)registerPersonality:(id)a0;
- (void)cancelTermination;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)mergeSubsystems:(id)a0 from:(id)a1;
- (id)hostPrincipalForPlugInNamed:(id)a0;
- (void)scheduleTermination:(double)a0;
- (id)personalityNamed:(id)a0 forHostPid:(int)a1;
- (id)connectionForPlugInNamed:(id)a0;
- (id)embeddedPrincipalForPlugInNamed:(id)a0;
- (BOOL)_processDefaultSubsystemName:(id)a0;
- (void)mergeSubsystemList:(id)a0 from:(id)a1;
- (void)discoverSubsystems;
- (void)copyAppStoreReceipt:(id /* block */)a0;
- (id)discoverSubsystemNamed:(id)a0 options:(id)a1 logMissing:(BOOL)a2;
- (void)launchContainingApplicationForPlugInNamed:(id)a0;
- (void)_prepareToRun;
- (id)defaultsForPlugInNamed:(id)a0;

@end
