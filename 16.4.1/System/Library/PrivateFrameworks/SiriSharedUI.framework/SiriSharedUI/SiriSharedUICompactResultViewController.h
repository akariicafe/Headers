@class SiriSharedUICompactResultView, SiriSharedUIContentPlatterViewController;

@interface SiriSharedUICompactResultViewController : UIViewController

@property (readonly, nonatomic) SiriSharedUICompactResultView *compactResultView;
@property (copy, nonatomic) SiriSharedUIContentPlatterViewController *contentPlatterViewController;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;

@end
