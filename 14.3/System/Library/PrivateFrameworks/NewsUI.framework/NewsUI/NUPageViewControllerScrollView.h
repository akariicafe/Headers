@protocol NUPageViewControllerScrollViewAccessibilityDelegate;

@interface NUPageViewControllerScrollView : UIScrollView

@property (weak, nonatomic) id<NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;

- (void).cxx_destruct;
- (BOOL)accessibilityScroll:(long long)a0;

@end
