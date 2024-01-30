@class UIColor, NSString, UIImageView, UILongPressGestureRecognizer;
@protocol UITableConstants, _UICollectionViewListCellReorderControlDelegate;

@interface _UICollectionViewListCellReorderControl : UIControl <UIGestureRecognizerDelegate> {
    UIImageView *_imageView;
    UILongPressGestureRecognizer *_reorderRecognizer;
    BOOL _tracking;
    BOOL _needsImageViewUpdate;
}

@property (weak, nonatomic) id<_UICollectionViewListCellReorderControlDelegate> delegate;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateImageViewIfNeeded;
- (void)endReordering:(BOOL)a0;
- (id)initWithDelegate:(id)a0 constants:(id)a1;
- (void)beginReordering;
- (void)gestureMovedToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)pan:(id)a0;
- (void)layoutSubviews;
- (void)_setNeedsImageViewUpdate;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_minimumSizeForHitTesting;
- (void).cxx_destruct;

@end
