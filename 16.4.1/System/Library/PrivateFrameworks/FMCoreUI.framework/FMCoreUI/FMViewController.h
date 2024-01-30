@class NSString, NSMutableDictionary, NSMutableSet;

@interface FMViewController : UIViewController

@property (retain, nonatomic) NSMutableDictionary *kvoObservationTokens;
@property (retain, nonatomic) NSMutableSet *notificationTokens;
@property (readonly, copy) NSString *controllerNibName;

- (void)willMoveToParentViewController:(id)a0;
- (void)awakeFromNib;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)performSegueWithIdentifier:(id)a0 sender:(id)a1;
- (id)actualNibNameForName:(id)a0;
- (void)addKVOObservationToken:(id)a0 forObject:(id)a1;
- (void)addNotificationToken:(id)a0;
- (void)removeKVOObservationTokens;
- (void)removeNotificationTokens;

@end
