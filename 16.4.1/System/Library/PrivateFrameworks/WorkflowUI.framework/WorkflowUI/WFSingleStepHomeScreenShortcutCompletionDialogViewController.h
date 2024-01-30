@class NSTimer;

@interface WFSingleStepHomeScreenShortcutCompletionDialogViewController : WFCompactDialogViewController

@property (retain, nonatomic) NSTimer *timer;

- (void)startTimer;
- (id)requestIdentifier;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)isDraggingDismissalEnabled;
- (id)responseForInteractiveDismissal;
- (BOOL)allowsInteractiveDismiss;
- (BOOL)allowsInteractiveDismissal;
- (void)platterInteractionDidBegin;
- (void)platterInteractionDidFinish;

@end
