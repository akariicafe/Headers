@class UITextView;

@interface WDContactConsolidationLearnMoreViewController : HKViewController

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dismissButtonPressed:(id)a0;
- (void)createTextView;
- (void)createDismissButton;

@end
