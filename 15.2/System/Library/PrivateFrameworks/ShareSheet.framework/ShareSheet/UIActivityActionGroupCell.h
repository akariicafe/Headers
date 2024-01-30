@class UIStackView, _UIActivityActionCellBadgeView, _UIActivityActionCellTitleLabel, UIView, NSUUID, UIImageView, NSLayoutConstraint, _UIHostActivityProxy, UILabel;

@interface UIActivityActionGroupCell : UIActivityActionCell {
    NSLayoutConstraint *_titleLabelHeightAnchor;
}

@property (retain, nonatomic) _UIActivityActionCellTitleLabel *titleLabel;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIView *activitySlotView;
@property (retain, nonatomic) UIView *titleSlotView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UIStackView *imageStackView;
@property (retain, nonatomic) _UIActivityActionCellTitleLabel *subtitleLabelIfLoaded;
@property (retain, nonatomic) _UIActivityActionCellBadgeView *badgeViewIfLoaded;
@property (retain, nonatomic) UIImageView *statusImageViewIfLoaded;
@property (retain, nonatomic) NSUUID *itemIdentifier;
@property (nonatomic) unsigned long long sequence;
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) _UIActivityActionCellBadgeView *badgeView;
@property (readonly, nonatomic) UIImageView *statusImageView;

- (void)setDisabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
