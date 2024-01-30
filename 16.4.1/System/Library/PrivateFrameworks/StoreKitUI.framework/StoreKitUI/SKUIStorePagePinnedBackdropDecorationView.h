@class _UIBackdropView, _UIBackdropViewSettings, UIView;

@interface SKUIStorePagePinnedBackdropDecorationView : UICollectionReusableView {
    _UIBackdropView *_backdropView;
    UIView *_backgroundView;
    _UIBackdropViewSettings *_backdropStyleDefaultSettings;
}

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
