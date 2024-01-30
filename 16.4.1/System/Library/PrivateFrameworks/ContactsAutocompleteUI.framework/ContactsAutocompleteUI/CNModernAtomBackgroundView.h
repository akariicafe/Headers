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

- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)_setSelectionStyle:(unsigned long long)a0;
- (double)separatorWidth;
- (id)_chevronImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_backgroundBleedArea;
- (BOOL)appearsSelected;
- (void)displaySelectionChangeWithAnimation:(BOOL)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 style:(unsigned long long)a2 updateVisualSelection:(BOOL)a3;
- (id)wrappedTintColor;

@end
