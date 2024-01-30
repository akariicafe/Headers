@interface HealthProfile.MeContactAvatarView : UIView <CNAvatarViewControllerDelegate> {
    void /* unknown type, empty encoding */ defaultAvatarImageSymbolConfiguration;
    void /* unknown type, empty encoding */ contactsAvatarViewController;
    void /* unknown type, empty encoding */ defaultAvatarImageView;
    void /* unknown type, empty encoding */ avatarSize;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didUpdateContentForAvatarViewController:(id)a0;
- (void)meContactCacheDidUpdateWithNotification:(id)a0;

@end
