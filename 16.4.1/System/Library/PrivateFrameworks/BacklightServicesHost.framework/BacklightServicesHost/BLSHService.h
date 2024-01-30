@class BLSHBacklightOSInterfaceProvider, BLSHBacklightService, BLSHLocalAssertionService, BLSHDefaultsObserver, BLSHAssertionService;
@protocol BLSHInactiveBudgetPolicing, BLSHServicePlatformProvider;

@interface BLSHService : NSObject {
    BLSHAssertionService *_assertionService;
    BLSHBacklightOSInterfaceProvider *_osInterfaceProvider;
    BLSHBacklightService *_backlightService;
    BLSHDefaultsObserver *_defaultsObserver;
}

@property (readonly, nonatomic) id<BLSHServicePlatformProvider> platformProvider;
@property (readonly, nonatomic) BLSHLocalAssertionService *localAssertionService;
@property (readonly, nonatomic) id<BLSHInactiveBudgetPolicing> inactiveBudgetPolicy;

+ (id)sharedService;
+ (void)earlyInitialization;
+ (id)startServiceWithPlatformProvider:(id)a0;

- (void)deregisterSceneWorkspace:(id)a0;
- (void)registerSceneWorkspace:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlatformProvider:(id)a0;
- (void)beginSpecialManagementForHostEnvironment:(id)a0;

@end
