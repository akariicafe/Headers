@class ADAdSpace, ADHomeButtonHandler;

@interface ADEventEditViewController : EKEventEditViewController

@property (retain, nonatomic) ADHomeButtonHandler *homeButtonHandler;
@property (retain, nonatomic) id notificationObserver;
@property (retain, nonatomic) ADAdSpace *adSpace;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cancelAndDismiss;

@end
