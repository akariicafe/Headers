@class NSLayoutConstraint, UIImageView, _UIActivityActionCellTitleLabel, UIView, UIVisualEffectView, _UIHostActivityProxy;

@interface UIActivityActionGroupCell : _UICollectionViewListCell {
    NSLayoutConstraint *_titleLabelHeightAnchor;
}

@property (retain, nonatomic) _UIActivityActionCellTitleLabel *titleLabel;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIView *activitySlotView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *fillView;
@property (nonatomic) unsigned long long sequence;
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
