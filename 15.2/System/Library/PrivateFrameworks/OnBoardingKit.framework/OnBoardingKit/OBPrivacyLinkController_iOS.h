@class UIImageView, UITextView, OBPrivacyLinkButton;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (void)setCustomTintColor:(id)a0;
- (void)setUnderlineLinks:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithPrivacyBundle:(id)a0;
- (id)initWithBundleIdentifiers:(id)a0;
- (void)processBundlesForTitleInformation;
- (void)setLinkEnabled:(BOOL)a0;

@end
