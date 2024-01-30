@class UIButton, NSString, UIScreenEdgePanGestureRecognizer, UILabel, PMRoundProgressView;

@interface PMRoundProgressViewController : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL didFadeOut;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) PMRoundProgressView *progressView;
@property (retain, nonatomic) UIButton *leftCancelButton;
@property (retain, nonatomic) UIButton *rightCancelButton;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanLeftGestureRecognizer;
@property (retain, nonatomic) NSString *labelText;
@property (nonatomic) float progress;
@property (nonatomic) BOOL showCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)nibBundle;
- (void)viewDidDisappear:(BOOL)a0;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)configureView;
- (void)handlePanFromEdge:(id)a0;
- (void)setCancelTarget:(id)a0 action:(SEL)a1;

@end
