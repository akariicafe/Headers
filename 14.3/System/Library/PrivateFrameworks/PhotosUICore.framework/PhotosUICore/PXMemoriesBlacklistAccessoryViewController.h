@class PXMemoriesBlacklistAccessoryViewSpec, NSArray, UIView;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController

@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)didReceiveMemoryWarning;
- (id)initWithAccessoryView:(id)a0 viewSpec:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
