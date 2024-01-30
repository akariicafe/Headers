@class UIScrollView, UIInputViewSetNotificationInfo;

@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate> {
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    BOOL _scrollViewTransitionFinishing;
    BOOL _disableInterfaceAutorotation;
    struct CGPoint { double x; double y; } _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
}

- (void)scrollView:(id)a0 didPanWithGesture:(id)a1;
- (void)setInterfaceAutorotationDisabled:(BOOL)a0 forController:(id)a1;
- (void)_updateKeyboardLayoutGuideForInteractiveScrollWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)completeKeyboardDismiss:(unsigned long long)a0 withDuration:(double)a1;
- (id)cancelNotificationsForMode:(unsigned long long)a0;
- (void)finishScrollViewTransition;
- (void)completedPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;
- (void)scrollView:(id)a0 didFinishPanGesture:(id)a1;
- (void)dealloc;
- (void)updateScrollViewContentInsetBottom:(double)a0;
- (void)finishScrollViewTransitionForController:(id)a0;
- (void)hideScrollViewHorizontalScrollIndicator:(BOOL)a0;

@end
