@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject

@property (nonatomic) BOOL triggerArmed;
@property (weak, nonatomic) id<CSNotificationClearingTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL hadNotificationContentAtDisappearance;
@property (nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) BOOL uiLocked;
@property (nonatomic) BOOL screenOff;

- (void)_reset;
- (void)_updateTriggerAndClearIfNeeded;
- (void).cxx_destruct;
- (BOOL)_wouldArmIfNotForDND;
- (BOOL)_wouldArmIfNotForDNDAndNotificationContent;
- (BOOL)_wouldArmForDiscreteParameters;
- (BOOL)_shouldArm;
- (void)_clearIfNeeded;
- (BOOL)_shouldFire;
- (id)initWithDelegate:(id)a0;

@end
