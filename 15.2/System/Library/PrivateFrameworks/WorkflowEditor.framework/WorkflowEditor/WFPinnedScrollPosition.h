@class UIView, WFScrollPositionPinningCollectionView;

@interface WFPinnedScrollPosition : NSObject

@property (readonly, weak, nonatomic) WFScrollPositionPinningCollectionView *scrollView;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } center;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithScrollView:(id)a0 view:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentSize:(struct CGSize { double x0; double x1; })a1;

@end
