@class NSString, _TtC12GameCenterUI23GKMultiplayerStatusView, _TtC12GameCenterUI16DynamicTypeLabel, UIButton;

@interface GameCenterUI.GKMultiplayerCollectionViewCellObsolete : UICollectionViewCell {
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ silhouetteView;
    void /* unknown type, empty encoding */ shouldDisplaySilhouette;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ displaysMessagesIcon;
    void /* unknown type, empty encoding */ messagesIconView;
    void /* unknown type, empty encoding */ statusAccessoryView;
    void /* unknown type, empty encoding */ statusButtonView;
    void /* unknown type, empty encoding */ tapHandler;
    void /* unknown type, empty encoding */ layoutMode;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityNameLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI23GKMultiplayerStatusView *accessibilityStatusAccessoryView;
@property (nonatomic, readonly) UIButton *accessibilityStatusButtonView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)applyWithParticipant:(id)a0 number:(long long)a1 isRemovingEnabled:(BOOL)a2 isInvitingEnabled:(BOOL)a3 layoutMode:(long long)a4;
- (void)didTapRemoveButton:(id)a0;
- (void)didTapAddButton:(id)a0;

@end
