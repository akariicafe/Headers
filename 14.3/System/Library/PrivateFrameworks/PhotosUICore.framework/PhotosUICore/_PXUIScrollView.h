@protocol PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider;

@interface _PXUIScrollView : UIScrollView

@property (weak, nonatomic, setter=px_setDelegate:) id<PXUIScrollViewDelegate> px_delegate;
@property (weak, nonatomic) id<_PXUIScrollViewFocusItemProvider> focusItemProvider;
@property (nonatomic) struct CGPoint { double x; double y; } pagingOriginOffset;
@property (nonatomic) BOOL deferContentOffsetUpdates;
@property (nonatomic) BOOL respectsContentZOrder;

- (void)px_addSubview:(id)a0;
- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)_updatePagingOrigin;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
