@interface PKProgressContentViewController : UIViewController

@property (nonatomic) double progress;

- (id)_contentView;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end
