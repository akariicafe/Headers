@class BKUIIndicatorViewController;

@interface BKUIIndicatorWindow : UIWindow

@property (retain, nonatomic) BKUIIndicatorViewController *indicatorController;
@property (nonatomic) BOOL shouldShow;

+ (id)instanceWithWindowScene:(id)a0;

- (id)backgroundColor;
- (void).cxx_destruct;

@end
