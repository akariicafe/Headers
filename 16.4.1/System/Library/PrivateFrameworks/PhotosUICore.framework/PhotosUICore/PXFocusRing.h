@class CALayer;

@interface PXFocusRing : UIView {
    CALayer *_outerLayer;
    CALayer *_focusLayer;
    CALayer *_innerLayer;
}

+ (void)updateView:(id)a0 infoProviderBlock:(id /* block */)a1;

- (void)_updateColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateWithInfo:(id)a0;
- (void)_updateWithView:(id)a0;
- (void)_updateWithView:(id)a0 focusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadius:(double)a2 innerBorderWidth:(double)a3 outerBorderWidth:(double)a4;

@end
