@protocol NUPageViewControllerScrollViewAccessibilityDelegate;

@interface NUPageViewControllerScrollView : UIScrollView

@property (weak, nonatomic) id<NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;

- (BOOL)accessibilityScroll:(long long)a0;
- (void).cxx_destruct;

@end
