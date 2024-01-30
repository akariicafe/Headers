@class UIVisualEffectView;

@interface _UICollectionViewListSeparatorView : UICollectionReusableView {
    UIVisualEffectView *_effectView;
}

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setUpEffectViewWithEffect:(id)a0;
- (void)_tearDownEffectView;
- (void).cxx_destruct;

@end
