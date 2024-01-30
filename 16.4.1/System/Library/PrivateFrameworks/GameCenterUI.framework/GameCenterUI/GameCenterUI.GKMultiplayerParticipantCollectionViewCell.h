@class NSString, _TtC12GameCenterUI16DynamicTypeLabel, _TtC12GameCenterUI23GKMultiplayerStatusView;

@interface GameCenterUI.GKMultiplayerParticipantCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ contentBackgroundView;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ silhouetteView;
    void /* unknown type, empty encoding */ shouldDisplaySilhouette;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ removeButton;
    void /* unknown type, empty encoding */ vibrantRemoveButton;
    void /* unknown type, empty encoding */ focusGuide;
    void /* unknown type, empty encoding */ displaysInviteeSourceIcon;
    void /* unknown type, empty encoding */ messagesIconView;
    void /* unknown type, empty encoding */ statusAccessoryView;
    void /* unknown type, empty encoding */ tapHandler;
    void /* unknown type, empty encoding */ layoutMode;
    void /* unknown type, empty encoding */ viewStatus;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic) void /* unknown type, empty encoding */ sharePlayEnabled;
@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic) BOOL removeButtonHidden;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityNameLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI23GKMultiplayerStatusView *accessibilityStatusAccessoryView;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)applyWithParticipant:(id)a0 number:(long long)a1 isRemovingEnabled:(BOOL)a2 isInvitingEnabled:(BOOL)a3 layoutMode:(long long)a4;
- (void)didTapRemoveButton:(id)a0;

@end
