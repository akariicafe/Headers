@interface MenstrualCyclesAppPlugin.CycleStatisticsCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_valueLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionLabel;
}

@property (nonatomic) BOOL highlighted;

- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
