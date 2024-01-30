@class UIScrollView, UIInputViewSetNotificationInfo;

@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate> {
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    BOOL _scrollViewTransitionFinishing;
    BOOL _disableInterfaceAutorotation;
    struct CGPoint { double x; double y; } _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
}

- (void)finishScrollViewTransitionForController:(id)a0;
- (void)scrollView:(id)a0 didPanWithGesture:(id)a1;
- (void)updateScrollViewContentInsetBottom:(double)a0;
- (void)scrollView:(id)a0 didFinishPanGesture:(id)a1;
- (void)setInterfaceAutorotationDisabled:(BOOL)a0 forController:(id)a1;
- (void)completedPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;
- (void)finishScrollViewTransition;
- (void)_updateKeyboardLayoutGuideForInteractiveScrollWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)cancelNotificationsForMode:(unsigned long long)a0;
- (void)completeKeyboardDismiss:(unsigned long long)a0 withDuration:(double)a1;
- (void)hideScrollViewHorizontalScrollIndicator:(BOOL)a0;
- (void).cxx_destruct;

@end
