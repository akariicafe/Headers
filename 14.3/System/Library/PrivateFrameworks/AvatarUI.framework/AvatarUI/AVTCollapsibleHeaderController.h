@class UIScrollView, NSString, UIView;
@protocol UIScrollViewDelegate, AVTCollapsibleHeaderControllerDelegate;

@interface AVTCollapsibleHeaderController : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double scrollToCompressionMultiplier;
@property (nonatomic) double expandMarginalScrollDistance;
@property (nonatomic) double collapseMarginalScrollDistance;
@property (nonatomic) BOOL shouldPushContentOffsetOnExpandOrCollapse;
@property (nonatomic) BOOL shouldCollapseOnBottomBounceScroll;
@property (nonatomic) double previousOffset;
@property (nonatomic) double singleTouchOffset;
@property (nonatomic) unsigned long long currentScrollDirection;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIView *headerView;
@property (nonatomic) id<AVTCollapsibleHeaderControllerDelegate> delegate;
@property (readonly, nonatomic) double currentHeightForHeader;
@property (nonatomic) double additionalTopContentInset;
@property (nonatomic) BOOL shouldResizeHeaderForScrolling;
@property (nonatomic) BOOL shouldSnapToMinOrMax;
@property (nonatomic) BOOL shouldOnlyExpandWhenScrollingAtEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToTopAnimated:(BOOL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })updatedScrollViewInsetsFromExistingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateInsetsIfNeeded;
- (void)updateHeaderForHeight:(double)a0 withOffset:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)expandAnimated:(BOOL)a0;
- (void)collapseAnimated:(BOOL)a0;
- (void)updateHeaderSizeForGlobalHeaderHeight:(double)a0;
- (struct CGPoint { double x0; double x1; })topContentOffsetWithHeaderHeight:(double)a0;
- (double)headerHeightForContentOffset:(double)a0 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (BOOL)shouldResizeGivenMarginalScrollDistancesForScrollDirection:(unsigned long long)a0;
- (BOOL)shouldResizeGivenScrollDirection:(unsigned long long)a0 currentHeaderHeight:(double)a1 targetHeaderHeight:(double)a2;
- (void)updateHeaderHeightToMatchScrollViewStateForScrollDirection:(unsigned long long)a0 animated:(BOOL)a1;
- (void)snapToMinMaxIfNeededAnimated:(BOOL)a0;
- (id)initWithScrollView:(id)a0 headerView:(id)a1 minHeight:(double)a2 maxHeight:(double)a3;
- (void)updateMinHeight:(double)a0 maxHeight:(double)a1 animated:(BOOL)a2;
- (void)expandAnimated:(BOOL)a0 withFocusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 standardItemHeight:(double)a2;
- (void)scrollToTopPreservingHeaderHeight:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
