@class _UIEventDeferringManager, NSString;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

@interface _UIEventDeferringBehavior_Default : NSObject <_UIEventDeferringBehaviorInternal> {
    struct { unsigned char systemShellManagesKeyboardFocus : 1; } _behaviorFlags;
}

@property (weak, nonatomic) id<_UIEventDeferringSystemShellBehaviorDelegate> systemShellBehaviorDelegate;
@property (nonatomic) BOOL systemShellManagesKeyboardFocus;
@property (readonly, weak, nonatomic) _UIEventDeferringManager *eventDeferringManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEventDeferringManager:(id)a0;
- (BOOL)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (long long)compareRemoteRuleOwningElement:(id)a0 toElement:(id)a1 inEnvironment:(id)a2;
- (BOOL)wantsLocalCompatibilityRules;
- (BOOL)shouldAllowFallbackWindowForEnvironment:(id)a0;
- (BOOL)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)shouldSuppressRemoteRuleForOwningElement:(id)a0 inEnvironment:(id)a1;
- (BOOL)eligibleForLocalCompatibilityRuleRemoval;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (void).cxx_destruct;
- (BOOL)wantsLocalIdealRules;

@end
