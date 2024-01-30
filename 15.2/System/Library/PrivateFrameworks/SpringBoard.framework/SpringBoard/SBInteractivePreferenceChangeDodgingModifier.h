@class NSString, SBPreferenceChangeDodgingModifier;

@interface SBInteractivePreferenceChangeDodgingModifier : SBDodgingModifier {
    NSString *_identifier;
    SBPreferenceChangeDodgingModifier *_preferenceChangeModifier;
    unsigned long long _style;
    BOOL _awaitingFinalAnimation;
}

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)framesForIdentifiers;
- (long long)animationBehaviorModeForIdentifier:(id)a0;
- (id)handlePreferenceChangeEvent:(id)a0;
- (id)zOrderedIdentifiers;
- (BOOL)completesWhenChildrenComplete;

@end
