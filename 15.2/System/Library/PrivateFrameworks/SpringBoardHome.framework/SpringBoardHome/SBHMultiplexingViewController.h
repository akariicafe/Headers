@class SBHMultiplexingManager, NSString, NSHashTable, UIViewController;

@interface SBHMultiplexingViewController : UIViewController

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SBHMultiplexingManager *multiplexingManager;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *multiplexedViewController;

- (id)sbh_underlyingAvocadoHostViewControllers;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)sbh_isMultiplexingViewController;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)activateWithViewController:(id)a0;
- (void)deactivate;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)_setUpMultiplexedViewController;
- (void)dealloc;
- (id)initWithLevel:(double)a0 identifier:(id)a1;

@end
