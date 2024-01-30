@protocol MemoryOwner;

@interface MiroPlayerViewController : UIViewController

@property (retain, nonatomic) id<MemoryOwner> memoryOwnerDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)warnTooManyLiveCompositors:(id)a0;

@end
