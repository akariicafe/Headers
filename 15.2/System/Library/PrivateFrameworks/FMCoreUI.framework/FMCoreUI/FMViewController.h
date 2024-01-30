@class NSString, NSMutableDictionary, NSMutableSet;

@interface FMViewController : UIViewController

@property (retain, nonatomic) NSMutableDictionary *kvoObservationTokens;
@property (retain, nonatomic) NSMutableSet *notificationTokens;
@property (readonly, copy) NSString *controllerNibName;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)awakeFromNib;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)performSegueWithIdentifier:(id)a0 sender:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)removeKVOObservationTokens;
- (void)removeNotificationTokens;
- (void)addKVOObservationToken:(id)a0 forObject:(id)a1;
- (void)addNotificationToken:(id)a0;
- (id)actualNibNameForName:(id)a0;

@end
