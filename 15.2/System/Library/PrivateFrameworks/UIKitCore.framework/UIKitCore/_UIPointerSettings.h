@class _UIFreeformPointerSettings, _UIPointerHighlightEffectSettings, _UIButtonBehaviorSettings, _UILinkPointerSettings, _UISearchBarBehaviorSettings, _UIPointerHoverEffectSettings, _UIPointerLiftEffectSettings, _UIBeamPointerSettings, _UIPointerSBAppIconEffectSettings, _UITabBarBehaviorSettings, _UIPointerTextBehaviorSettings, _UINavigationAndToolbarBehaviorSettings, _UIPointerEffectSizeRuleSettings;

@interface _UIPointerSettings : PTSettings

@property (nonatomic) BOOL showRegions;
@property (nonatomic) BOOL showEffectPlatter;
@property (retain, nonatomic) _UIPointerEffectSizeRuleSettings *sizeRuleSettings;
@property (retain, nonatomic) _UIFreeformPointerSettings *freeformPointerSettings;
@property (retain, nonatomic) _UIBeamPointerSettings *beamSettings;
@property (retain, nonatomic) _UILinkPointerSettings *linkPointerSettings;
@property (retain, nonatomic) _UIPointerHighlightEffectSettings *highlightEffectSettings;
@property (retain, nonatomic) _UIPointerLiftEffectSettings *liftEffectSettings;
@property (retain, nonatomic) _UIPointerHoverEffectSettings *hoverEffectSettings;
@property (retain, nonatomic) _UIPointerSBAppIconEffectSettings *SBAppIconEffectSettings;
@property (retain, nonatomic) _UIPointerTextBehaviorSettings *textSettings;
@property (retain, nonatomic) _UIButtonBehaviorSettings *buttonSettings;
@property (retain, nonatomic) _UINavigationAndToolbarBehaviorSettings *navigationAndToolbarSettings;
@property (retain, nonatomic) _UITabBarBehaviorSettings *tabBarSettings;
@property (retain, nonatomic) _UISearchBarBehaviorSettings *searchBarSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
