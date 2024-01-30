@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject

@property (nonatomic) BOOL triggerArmed;
@property (weak, nonatomic) id<CSNotificationClearingTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL hadNotificationContentAtDisappearance;
@property (nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) BOOL uiLocked;
@property (nonatomic) BOOL screenOff;

- (BOOL)_wouldArmIfNotForDND;
- (void)_reset;
- (id)initWithDelegate:(id)a0;
- (void)_clearIfNeeded;
- (void)_updateTriggerAndClearIfNeeded;
- (void).cxx_destruct;
- (BOOL)_shouldArm;
- (BOOL)_wouldArmIfNotForDNDAndNotificationContent;
- (BOOL)_wouldArmForDiscreteParameters;
- (BOOL)_shouldFire;

@end
