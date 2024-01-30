@interface PKProgressContentViewController : UIViewController

@property (nonatomic) double progress;

- (id)_contentView;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)_canShowWhileLocked;

@end
