@class NSArray, SiriUIContentPlatterView;

@interface SiriUIContentPlatterViewController : UIViewController

@property (retain, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) SiriUIContentPlatterView *contentPlatterView;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)_canShowWhileLocked;

@end
