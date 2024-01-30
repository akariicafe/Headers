@class DDFlightAction;

@interface DDAutoCloseNavigationController : UINavigationController

@property (weak) DDFlightAction *target;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)closePressed;

@end
