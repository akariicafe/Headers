@class NSArray, SiriUIContentPlatterView;

@interface SiriUIContentPlatterViewController : UIViewController

@property (retain, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) SiriUIContentPlatterView *contentPlatterView;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;

@end
