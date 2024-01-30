@interface PKProgressContentViewController : UIViewController

@property (nonatomic) double progress;

- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)_contentView;

@end
