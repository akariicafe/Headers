@class BKUIIndicatorViewController;

@interface BKUIIndicatorWindow : UIWindow

@property (retain, nonatomic) BKUIIndicatorViewController *indicatorController;
@property (nonatomic) BOOL shouldShow;

+ (id)instanceWithWindowScene:(id)a0;

- (void).cxx_destruct;
- (id)backgroundColor;

@end
