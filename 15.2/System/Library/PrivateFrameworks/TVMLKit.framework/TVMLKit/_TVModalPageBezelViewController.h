@class UIColor, UIViewController;

@interface _TVModalPageBezelViewController : UIViewController

@property (nonatomic) double bezelCornerRadius;
@property (retain, nonatomic) UIColor *bezelBackgroundColor;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
