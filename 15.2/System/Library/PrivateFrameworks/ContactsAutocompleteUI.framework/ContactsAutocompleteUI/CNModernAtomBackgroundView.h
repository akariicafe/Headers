@class CNAtomView, UIView;

@interface CNModernAtomBackgroundView : UIView {
    unsigned long long _selectionStyle;
    BOOL _selected;
}

@property (readonly, nonatomic) UIView *selectedView;
@property (readonly, nonatomic) UIView *separatorView;
@property (weak, nonatomic) CNAtomView *hostAtomView;
@property (nonatomic) int separatorStyle;
@property (nonatomic) double scalingFactor;

- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isSelected;
- (void)tintColorDidChange;
- (double)separatorWidth;
- (void)_setSelectionStyle:(unsigned long long)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 style:(unsigned long long)a2 updateVisualSelection:(BOOL)a3;
- (void)displaySelectionChangeWithAnimation:(BOOL)a0;
- (BOOL)appearsSelected;
- (id)wrappedTintColor;
- (id)_chevronImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_backgroundBleedArea;

@end
