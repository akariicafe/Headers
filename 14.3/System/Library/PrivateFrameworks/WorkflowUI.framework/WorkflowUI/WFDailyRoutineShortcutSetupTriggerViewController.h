@class WFDailyRoutineShortcutSetupTriggerBuilder;
@protocol WFDailyRoutineShortcutSetupTriggerViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController

@property (weak, nonatomic) id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupTriggerBuilder *trigger;

- (void).cxx_destruct;
- (id)initWithTrigger:(id)a0;
- (void)didSelectAddTriggerButton;
- (void)didSelectSkipButton;

@end
