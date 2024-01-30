@class MFModernAtomView, UIView;

@interface MFModernAtomBackgroundView : UIView {
    unsigned long long _selectionStyle;
    BOOL _selected;
}

@property (readonly, nonatomic) UIView *selectedView;
@property (readonly, nonatomic) UIView *separatorView;
@property (weak, nonatomic) MFModernAtomView *hostAtomView;
@property (nonatomic) int separatorStyle;
@property (nonatomic) double scalingFactor;

- (void)tintColorDidChange;
- (BOOL)isSelected;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)_setSelectionStyle:(unsigned long long)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 style:(unsigned long long)a2;
- (double)separatorWidth;
- (void)layoutSubviews;
- (id)_chevronImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_backgroundBleedArea;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
