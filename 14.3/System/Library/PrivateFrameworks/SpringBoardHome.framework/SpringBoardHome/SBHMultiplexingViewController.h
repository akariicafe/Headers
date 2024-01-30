@class SBHMultiplexingManager, NSString, NSHashTable, UIViewController;

@interface SBHMultiplexingViewController : UIViewController

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) SBHMultiplexingManager *multiplexingManager;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *multiplexedViewController;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)initWithLevel:(double)a0 identifier:(id)a1;
- (void)activateWithViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setUpMultiplexedViewController;
- (void)deactivate;
- (BOOL)_canShowWhileLocked;

@end
