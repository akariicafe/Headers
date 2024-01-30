@class UILabel, CAShapeLayer;

@interface MPAVRoutingTableHeaderView : UIView {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    CAShapeLayer *_borderLayer;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_mirroringCompactDescription;
- (id)_mirroringCompactDescriptionTextAttributes;
- (id)_mirroringTitleTextAttributes;

@end
