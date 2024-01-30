@class SUICProgressEventViewController;

@interface WFInteractionCardProgressViewController : UIViewController

@property (retain, nonatomic) SUICProgressEventViewController *progressEventViewController;

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)handleEvent:(unsigned long long)a0;
- (void).cxx_destruct;

@end
