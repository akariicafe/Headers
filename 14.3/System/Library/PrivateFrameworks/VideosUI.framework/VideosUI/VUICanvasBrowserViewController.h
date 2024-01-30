@interface VUICanvasBrowserViewController : VUIProductShowcaseViewController

@property (nonatomic) BOOL shouldNeverShowLargeTitle;

- (void)viewWillAppear:(BOOL)a0;
- (void)updateWithViewElement:(id)a0;
- (long long)_overrideLargeTitleDisplayMode;

@end
