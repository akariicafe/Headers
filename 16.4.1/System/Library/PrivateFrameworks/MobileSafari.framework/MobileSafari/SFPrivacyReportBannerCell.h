@interface SFPrivacyReportBannerCell : SFInteractiveBannerCell {
    unsigned long long _action;
}

@property (nonatomic) long long numberOfTrackers;
@property (nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;

+ (id)reuseIdentifier;

- (void)_updateState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setAction:(unsigned long long)a0 text:(id)a1;
- (void)_privacyProxyAvailabilityChanged:(id)a0;
- (void)configureUsingBanner:(id)a0;

@end
