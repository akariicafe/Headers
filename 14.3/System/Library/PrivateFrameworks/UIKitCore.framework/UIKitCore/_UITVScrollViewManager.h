@class NSString, UIScrollView, UIView, CASpringAnimation;
@protocol _UITVScrollViewManagerDelegate;

@interface _UITVScrollViewManager : NSObject <_UIScrollViewScrollObserver> {
    BOOL _delegateScrollViewManagerDidFinishScrolling;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CASpringAnimation *scrollAnimation;
@property (nonatomic) long long scrollStyle;
@property (retain, nonatomic) UIView *snapshotViewForWindow;
@property (nonatomic) BOOL useCustomMaskForScrolling;
@property (nonatomic) struct CGPoint { double x; double y; } targetOffset;
@property (weak, nonatomic) id<_UITVScrollViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_tearDown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_scrollAnimationDidEnd:(id)a0;
- (void)_scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_removeScreenshotViewIfNeeded;
- (id)_customScrollViewMaskForScrolling:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithScrollView:(id)a0 scrollStyle:(long long)a1;
- (long long)_currentPage;
- (void)_observeScrollViewDidScroll:(id)a0;

@end
