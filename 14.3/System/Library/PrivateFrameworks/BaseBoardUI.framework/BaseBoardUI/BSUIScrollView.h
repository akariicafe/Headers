@class NSString;
@protocol BSUIScrollViewDelegate;

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate> {
    BOOL _isScrolling;
    BOOL _preventDidEndScrolling;
    BOOL _didScroll;
    id /* block */ _scrollCompletion;
    struct CGPoint { double x; double y; } _previousContentOffset;
    struct CGPoint { double x; double y; } _initialContentOffset;
}

@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic) struct { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; } currentScrollContext;
@property (weak, nonatomic) id<BSUIScrollViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didEndScrollAnimationNotification:(id)a0;
- (void)_notifyDidScroll;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_didDidEndDeceleratingNotification:(id)a0;
- (void)_bs_didScrollWithContext:(struct { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; })a0;
- (void)_didEndDraggingNotification:(id)a0;
- (void).cxx_destruct;
- (BOOL)setContentOffset:(struct CGPoint { double x0; double x1; })a0 withAnimationSettings:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (BOOL)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_bs_didEndScrolling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setContentOffset:(struct CGPoint { double x0; double x1; })a0 animation:(id)a1;
- (void)_bs_willBeginScrolling;
- (void)_willBeginDraggingNotification:(id)a0;

@end
