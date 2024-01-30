@protocol MFLoadBlockedContentBannerViewDelegate;

@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView {
    long long _blockingReason;
}

@property (weak, nonatomic) id<MFLoadBlockedContentBannerViewDelegate> delegate;
@property (nonatomic) unsigned long long blockedContentTypes;

+ (id)log;

- (void)primaryAction;
- (id)actionTitle;
- (id)title;
- (void).cxx_destruct;
- (void)_titleControlTapped:(id)a0;
- (void)_updateBannerText;
- (void)enablePrivacyProtectionAlertForAccount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockedContentTypes:(unsigned long long)a1 blockingReason:(long long)a2;

@end
