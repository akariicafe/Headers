@class NSString, WFDailyRoutineShortcutSetupQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupQuestionViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>

@property (weak, nonatomic) id<WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithQuestion:(id)a0;
- (id)selectedLocationForDailyRoutineShortcutSetupQuestionChildViewController:(id)a0;
- (void)dailyRoutineShortcutSetupQuestionChildViewController:(id)a0 didSelectActions:(id)a1;
- (void)dailyRoutineShortcutSetupQuestionChildViewControllerDidSkip:(id)a0;
- (void)didSelectSkip;

@end
