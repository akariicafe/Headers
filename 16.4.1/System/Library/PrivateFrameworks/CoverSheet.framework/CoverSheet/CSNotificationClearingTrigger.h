@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject

@property (nonatomic) BOOL triggerArmed;
@property (weak, nonatomic) id<CSNotificationClearingTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL hadNotificationContentAtDisappearance;
@property (nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) BOOL uiLocked;
@property (nonatomic) BOOL screenOff;
@property (nonatomic) BOOL screenInactive;

- (void)_reset;
- (BOOL)_wouldArmForDiscreteParameters;
- (void)_clearIfNeeded;
- (void)_updateTriggerAndClearIfNeeded;
- (BOOL)_shouldArm;
- (id)initWithDelegate:(id)a0;
- (BOOL)_shouldFire;
- (BOOL)_wouldArmIfNotForDNDAndNotificationContent;
- (BOOL)_wouldArmIfNotForDND;
- (void).cxx_destruct;

@end
