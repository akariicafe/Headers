@class NSString, UILabel;

@interface GameCenterUI.GKPickerGroupNearbyCell : GameCenterUI.GKPickerGroupNearbyCollectionViewCell

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *reuseIdentifierAX;

@property (nonatomic, weak) void /* unknown type, empty encoding */ iconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ badgeLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;

- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isHighlighted;
- (void)prepareForReuse;
- (void)configureWithBadgeCount:(long long)a0;

@end
