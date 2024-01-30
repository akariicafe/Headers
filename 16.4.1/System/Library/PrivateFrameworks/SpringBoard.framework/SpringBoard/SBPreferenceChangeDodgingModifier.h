@class NSString;

@interface SBPreferenceChangeDodgingModifier : SBDodgingModifier {
    NSString *_identifier;
    BOOL _animated;
    unsigned long long _phase;
}

@property (nonatomic, getter=isResigningLifecycleManagement) BOOL resignLifecycleManagement;
@property (nonatomic, getter=isResigningLifecycleManagement) BOOL boostUpdatedIdentifier;

- (void).cxx_destruct;
- (id)handleAnimationCompletionEvent:(id)a0;
- (long long)animationBehaviorModeForIdentifier:(id)a0;
- (id)handlePreferenceChangeEvent:(id)a0;
- (id)initWithIdentifier:(id)a0 animated:(BOOL)a1;
- (id)modelForInvalidatedModel:(id)a0;
- (id)zOrderedIdentifiers;

@end
