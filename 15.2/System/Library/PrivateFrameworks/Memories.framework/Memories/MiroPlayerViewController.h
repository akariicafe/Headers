@protocol MemoryOwner;

@interface MiroPlayerViewController : UIViewController

@property (retain, nonatomic) id<MemoryOwner> memoryOwnerDelegate;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)warnTooManyLiveCompositors:(id)a0;

@end
