@class NSMutableArray, LPVerticalTextStackViewStyle;

@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable> {
    NSMutableArray *_items;
    BOOL _hasEverBuilt;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPVerticalTextStackViewStyle *_style;
}

- (id)initWithStyle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)layoutComponentView;
- (struct CGSize { double x0; double x1; })_layoutTextStackForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (void)addArrangedSubview:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
