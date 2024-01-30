@class AFUITTRReport;

@interface AFUITTRBaseViewController : UIViewController

@property (retain) AFUITTRReport *ttrReport;
@property (weak, nonatomic) id /* block */ completion;

- (void)viewDidLoad;
- (id)labelWithTitle:(id)a0;
- (id)stackView;
- (void).cxx_destruct;
- (double)getSpacerHeight;
- (void)setupSkipButton;
- (void)setupBackButton;
- (void)skipToTTRTapped;
- (id)continueButtonWithTitle:(id)a0 isPrimary:(BOOL)a1;
- (double)getHorizontalPadding;
- (double)getVerticalPadding;
- (id)initWithReport:(id)a0 completion:(id /* block */)a1 step:(long long)a2 totalSteps:(long long)a3;

@end
