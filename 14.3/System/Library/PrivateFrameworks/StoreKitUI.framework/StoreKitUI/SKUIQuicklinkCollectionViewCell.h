@class UIButton;

@interface SKUIQuicklinkCollectionViewCell : SKUICollectionViewCell {
    UIButton *_linkButton;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)_linkButton;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)a0;
- (void)_linkButtonAction:(id)a0;
- (void)configureForLink:(id)a0;

@end
