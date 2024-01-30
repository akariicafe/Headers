@class SUICProgressEventViewController;

@interface WFInteractionCardProgressViewController : UIViewController

@property (retain, nonatomic) SUICProgressEventViewController *progressEventViewController;

- (void)handleEvent:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;

@end
