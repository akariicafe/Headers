@class SBHMultiplexingManager, NSString, NSHashTable, UIViewController;

@interface SBHMultiplexingViewController : UIViewController

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SBHMultiplexingManager *multiplexingManager;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *multiplexedViewController;

- (void)deactivate;
- (id)sbh_underlyingAvocadoHostViewControllers;
- (id)initWithLevel:(double)a0 identifier:(id)a1;
- (void)addObserver:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)activateWithViewController:(id)a0;
- (BOOL)sbh_isMultiplexingViewController;
- (void)_setUpMultiplexedViewController;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
