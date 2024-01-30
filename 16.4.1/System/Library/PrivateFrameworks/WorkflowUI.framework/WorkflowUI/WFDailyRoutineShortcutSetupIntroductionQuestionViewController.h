@class NSString, WFDailyRoutineShortcutSetupIntroductionQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController <WFDailyRoutineShortcutSetupQuestionChildViewController>

@property (weak, nonatomic) id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupIntroductionQuestion *question;
@property (readonly, nonatomic) BOOL parentShouldShowSkipButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQuestion:(id)a0;
- (void)didSelectContinueButton;

@end
