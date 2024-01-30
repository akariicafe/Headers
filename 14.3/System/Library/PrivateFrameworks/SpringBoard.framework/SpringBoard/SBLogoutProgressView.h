@class UIView, NSArray, _UILegibilitySettings, SBAppStatusBarSettingsAssertion, UIImageView, CNContact, NSLayoutConstraint, UILabel, UIActivityIndicatorView;

@interface SBLogoutProgressView : UIView {
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBAppStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}

@property (retain, nonatomic) CNContact *userContact;
@property (copy, nonatomic) NSArray *pendingApplications;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isProgressVisible) BOOL progressVisible;

- (void)_updateLegibility;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_goodbyeLabelBaselineOffset;
- (double)_userAvatarVerticalOffsetFromCenter;
- (double)_moreDocumentsLabelBaselineOffset;
- (void)_updateViewData;
- (void)_updateUserAvatar;
- (void)_updateUserAvatarLegibility;
- (void)_updateGoodbye;
- (void)_updateBlame;
- (void)setProgressVisible:(BOOL)a0;

@end
