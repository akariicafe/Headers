@class NSMutableSet;

@interface AssistantAppClipSettingsController : PSListController {
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledSpotlightApps;
}

+ (id)bundle;

- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (id)learnFromAppClipsEnabled:(id)a0;
- (void)setLearnFromAppClipsEnabled:(id)a0 specifier:(id)a1;
- (void)setShowInSearchEnabled:(id)a0 specifier:(id)a1;
- (void)setSuggestAppClipsEnabled:(id)a0 specifier:(id)a1;
- (id)showInSearchEnabled:(id)a0;
- (id)suggestAppClipsEnabled:(id)a0;

@end
