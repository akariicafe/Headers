@class UIImageView, UITextView, OBPrivacyLinkButton;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {
    OBPrivacyLinkButton *_linkButton;
    BOOL bundleTitlesMatch;
    BOOL bundlesIncludePII;
}

@property (readonly) UIImageView *iconView;
@property (readonly) UITextView *textView;

- (id)initWithBundleIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrivacyBundle:(id)a0;
- (void)loadView;
- (void)processBundlesForTitleInformation;
- (BOOL)_canShowWhileLocked;
- (void)setLinkEnabled:(BOOL)a0;

@end
