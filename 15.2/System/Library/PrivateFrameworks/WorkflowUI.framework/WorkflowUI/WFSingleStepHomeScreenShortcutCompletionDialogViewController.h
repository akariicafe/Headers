@class NSTimer;

@interface WFSingleStepHomeScreenShortcutCompletionDialogViewController : WFCompactDialogViewController

@property (retain, nonatomic) NSTimer *timer;

- (void)startTimer;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)platterInteractionDidBegin;
- (void)platterInteractionDidFinish;
- (BOOL)allowsInteractiveDismissal;
- (id)responseForInteractiveDismissal;

@end
