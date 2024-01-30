@class NSMutableSet;

@interface AssistantAppClipSettingsController : PSListController {
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledSpotlightApps;
}

+ (id)bundle;

- (void).cxx_destruct;
- (id)specifiers;
- (void)viewDidLoad;
- (void)setLearnFromAppClipsEnabled:(id)a0 specifier:(id)a1;
- (id)learnFromAppClipsEnabled:(id)a0;
- (void)setShowInSearchEnabled:(id)a0 specifier:(id)a1;
- (id)showInSearchEnabled:(id)a0;
- (void)setSuggestAppClipsEnabled:(id)a0 specifier:(id)a1;
- (id)suggestAppClipsEnabled:(id)a0;

@end
