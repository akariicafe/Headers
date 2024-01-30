@class UIButton;

@interface SKUIQuicklinkCollectionViewCell : SKUICollectionViewCell {
    UIButton *_linkButton;
}

- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_linkButton;
- (void)_linkButtonAction:(id)a0;
- (void)configureForLink:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;

@end
