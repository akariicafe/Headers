@class UIColor, UIViewController;

@interface _TVModalPageBezelViewController : UIViewController

@property (nonatomic) double bezelCornerRadius;
@property (retain, nonatomic) UIColor *bezelBackgroundColor;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
