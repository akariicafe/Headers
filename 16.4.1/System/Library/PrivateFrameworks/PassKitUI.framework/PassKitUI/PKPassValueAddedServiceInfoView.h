@class PKPassSnapshotter, UIImageView, UILabel, PKPass;

@interface PKPassValueAddedServiceInfoView : UIView {
    PKPassSnapshotter *_snapshotter;
    UILabel *_labelView;
    UIImageView *_snapshotView;
    UILabel *_statusView;
}

@property (nonatomic) long long style;
@property (retain, nonatomic) PKPass *pass;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_labelFont;
- (id)initWithStyle:(long long)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setStyle:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (double)_baselineDistance;
- (void)_calculateViewMetricsForWidth:(double)a0 labelSize:(struct CGSize { double x0; double x1; } *)a1 statusSize:(struct CGSize { double x0; double x1; } *)a2 baselineAdjustment:(double *)a3;
- (id)_labelAttributedStringForString:(id)a0;
- (id)_statusAttributedStringForStyle:(long long)a0;
- (id)_statusFont;
- (void)setPass:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
