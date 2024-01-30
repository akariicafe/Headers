@class UIImageView, UITextView, OBPrivacyLinkButton;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (id)initWithBundleIdentifiers:(id)a0;
- (void)processBundlesForTitleInformation;
- (id)initWithPrivacyBundle:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)setUnderlineLinks:(BOOL)a0;
- (void)setLinkEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)setCustomTintColor:(id)a0;

@end
