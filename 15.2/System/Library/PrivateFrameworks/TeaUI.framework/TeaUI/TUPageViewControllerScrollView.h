@protocol TUPageViewControllerScrollViewAccessibilityDelegate;

@interface TUPageViewControllerScrollView : UIScrollView

@property (weak, nonatomic) id<TUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;

- (BOOL)canBecomeFocused;
- (BOOL)accessibilityScroll:(long long)a0;
- (void).cxx_destruct;

@end
