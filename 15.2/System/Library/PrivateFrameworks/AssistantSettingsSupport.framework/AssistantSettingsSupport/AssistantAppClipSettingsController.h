@class NSMutableSet;

@interface AssistantAppClipSettingsController : PSListController {
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledSpotlightApps;
}

+ (id)bundle;

- (id)specifiers;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)setLearnFromAppClipsEnabled:(id)a0 specifier:(id)a1;
- (id)learnFromAppClipsEnabled:(id)a0;
- (void)setShowInSearchEnabled:(id)a0 specifier:(id)a1;
- (id)showInSearchEnabled:(id)a0;
- (void)setSuggestAppClipsEnabled:(id)a0 specifier:(id)a1;
- (id)suggestAppClipsEnabled:(id)a0;

@end
