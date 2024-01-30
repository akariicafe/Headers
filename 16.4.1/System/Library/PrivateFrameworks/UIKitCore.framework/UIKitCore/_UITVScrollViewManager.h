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

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)a0;
- (id)initWithScrollView:(id)a0 scrollStyle:(long long)a1;
- (id)_customScrollingMaskForScrollView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_removeScreenshotViewIfNeeded;
- (void)_scroll:(id)a0 toContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_scrollAnimationDidEnd:(id)a0;
- (void)_tearDown:(id)a0;

@end
