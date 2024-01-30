@class NSString, UILabel;

@interface GameCenterUI.GKPickerGroupCell : GameCenterUI.GKPickerGroupCollectionViewCell {
    void /* unknown type, empty encoding */ longPressRecognizer;
    void /* unknown type, empty encoding */ playerGroupView;
    void /* unknown type, empty encoding */ players;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) NSString *reuseIdentifierAX;

@property (nonatomic, weak) void /* unknown type, empty encoding */ container;
@property (nonatomic, weak) void /* unknown type, empty encoding */ messageIcon;
@property (nonatomic, weak) void /* unknown type, empty encoding */ iconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ ringView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ titleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ subtitleLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nearbyIconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nearbyIconVisualEffectView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ nearbyIcon;
@property (nonatomic, weak) void /* unknown type, empty encoding */ groupCellDelegate;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;

- (void)awakeFromNib;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)configureWithPlayers:(id)a0 title:(id)a1 subtitle:(id)a2 messagesGroupIdentifier:(id)a3 source:(long long)a4 playerSelectionProxy:(id)a5;
- (void)handleLongPressWithSender:(id)a0;

@end
