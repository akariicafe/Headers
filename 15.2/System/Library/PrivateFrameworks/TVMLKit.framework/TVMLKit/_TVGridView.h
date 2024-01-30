@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView {
    BOOL _delegateRespondsToIndexPathForPreferredFocusedView;
}

@property (retain, nonatomic) _TVCollectionViewFlowLayout *gridFlowLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (struct CGSize { double x0; double x1; })tv_sizeThatFits:(struct CGSize { double x0; double x1; })a0 withContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
