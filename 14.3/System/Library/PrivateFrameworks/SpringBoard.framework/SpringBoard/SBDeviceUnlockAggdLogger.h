@class NSString;

@interface SBDeviceUnlockAggdLogger : NSObject <CSExternalEventHandling>

@property (nonatomic, getter=_observeDashBoardEvents, setter=_setObserveDashBoardEvents:) BOOL observeDashBoardEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (void)logIdleTimerScreenDimWarning;
- (id)init;
- (void)logDeviceUnlock;
- (void)dealloc;
- (void)logOrientationAndAccessoryStateForPrefix:(id)a0;
- (void)conformsToCSEventHandling;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)logUserResetIdleTimer;
- (void)logDeviceWake;

@end
