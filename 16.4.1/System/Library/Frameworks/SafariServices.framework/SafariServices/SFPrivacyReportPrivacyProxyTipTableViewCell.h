@class NSLayoutConstraint;
@protocol SFPrivacyReportPrivacyProxyTipTableViewCellDelegate;

@interface SFPrivacyReportPrivacyProxyTipTableViewCell : UITableViewCell {
    NSLayoutConstraint *_insetLeading;
    NSLayoutConstraint *_insetTrailing;
}

@property (nonatomic) BOOL usesInsetStyle;
@property (weak, nonatomic) id<SFPrivacyReportPrivacyProxyTipTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)_dismiss:(id)a0;
- (void).cxx_destruct;
- (void)_notifyDelegateOfStateChange;
- (void)_createContentViews;
- (void)_openICloudPrivateRelaySettingsToLearnMore:(id)a0;
- (void)_setPrivacyProxyStateToTrackers:(id)a0;
- (void)_setPrivacyProxyStateToTrackersAndWebsites:(id)a0;
- (void)_turnOnCrossSiteTrackingProtectionIfNeeded;

@end
