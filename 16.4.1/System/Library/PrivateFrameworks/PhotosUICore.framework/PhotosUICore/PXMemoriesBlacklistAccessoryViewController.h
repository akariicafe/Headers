@class PXMemoriesBlacklistAccessoryViewSpec, NSArray, UIView;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController

@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithAccessoryView:(id)a0 viewSpec:(id)a1;

@end
