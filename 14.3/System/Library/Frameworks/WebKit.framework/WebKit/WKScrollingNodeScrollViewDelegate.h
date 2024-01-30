@class NSString;

@interface WKScrollingNodeScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    struct ScrollingTreeScrollingNodeDelegateIOS { void /* function */ **x0; struct ScrollingTreeScrollingNode *x1; struct RetainPtr<CALayer> { void *x0; } x2; struct RetainPtr<CALayer> { void *x0; } x3; struct RetainPtr<WKScrollingNodeScrollViewDelegate> { void *x0; } x4; struct OptionSet<WebCore::TouchAction> { unsigned char x0; } x5; BOOL x6; } *_scrollingTreeNodeDelegate;
}

@property (nonatomic, getter=_isInUserInteraction) BOOL inUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_actingParentScrollViewForScrollView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)cancelPointersForGestureRecognizer:(id)a0;
- (id)initWithScrollingTreeNodeDelegate:(struct ScrollingTreeScrollingNodeDelegateIOS { void /* function */ **x0; struct ScrollingTreeScrollingNode *x1; struct RetainPtr<CALayer> { void *x0; } x2; struct RetainPtr<CALayer> { void *x0; } x3; struct RetainPtr<WKScrollingNodeScrollViewDelegate> { void *x0; } x4; struct OptionSet<WebCore::TouchAction> { unsigned char x0; } x5; BOOL x6; } *)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
