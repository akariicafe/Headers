@class NSArray;

@interface HUPocketButtonViewController : UIViewController

@property (readonly, copy, nonatomic) NSArray *descriptors;

+ (struct CGSize { double x0; double x1; })calculatePreferredContentSizeForDescriptors:(id)a0;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_buttonHit:(id)a0;
- (id)initWithButtonDescriptors:(id)a0;

@end
