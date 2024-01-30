@class NSArray, SiriSharedUIContentPlatterView;

@interface SiriSharedUIContentPlatterViewController : UIViewController

@property (retain, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) SiriSharedUIContentPlatterView *contentPlatterView;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;
- (void)appendSeparatorToViewControllers:(id)a0 forNextViewController:(id)a1;

@end
