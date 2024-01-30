@interface OFUIViewController : UIViewController

+ (Class)viewClass;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
