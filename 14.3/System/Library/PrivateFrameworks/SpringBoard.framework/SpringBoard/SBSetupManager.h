@class NSString, SBFloatingDockBehaviorAssertion;
@protocol BSInvalidatable;

@interface SBSetupManager : NSObject <SBMainDisplayWorkspaceAppInteractionEventSourceObserving> {
    unsigned long long _setupRequiredReason;
    BOOL _setupWantedForDeviceMigration;
    SBFloatingDockBehaviorAssertion *_inSetupFloatingDockBehaviorAssertion;
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
}

@property (nonatomic, getter=isInSetupModeReadyToExit) BOOL inSetupModeReadyToExit;
@property (readonly, nonatomic, getter=isInSetupMode) BOOL inSetupMode;
@property (nonatomic, getter=isDeferringDeviceOrientationUpdates) BOOL deferringDeviceOrientationUpdates;
@property (readonly, nonatomic, getter=isInSetupModeForDeviceMigration) BOOL inSetupModeForDeviceMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_clearFloatingDockAssertion;
- (BOOL)_setSetupRequiredReason:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_isInSetupMode;
- (void)postLaunchCompleteNotificationForSetup;
- (BOOL)updateInSetupMode;
- (void)_toggleSetupForMigrationNeeded:(BOOL)a0 forReason:(id)a1;
- (void)_setupProcessChangedNotificationReceived:(id)a0;
- (void)eventSource:(id)a0 didBeginTransitionToMode:(long long)a1 withLayoutState:(id)a2 activatingElement:(id)a3 triggeredBy:(long long)a4;
- (BOOL)setupHasFinishedRestoringFromBackup;

@end
