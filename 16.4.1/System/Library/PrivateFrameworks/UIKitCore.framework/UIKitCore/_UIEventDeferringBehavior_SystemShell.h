@class NSString;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

@interface _UIEventDeferringBehavior_SystemShell : _UIEventDeferringBehavior_Default <BSDebugDescriptionProviding> {
    struct { unsigned char hasSystemShellBehaviorDelegate : 1; unsigned char delegateWantsLocalCompatibilityRules : 1; unsigned char delegateShouldSuppressRemoteRule : 1; unsigned char delegateCompareRemoteRules : 1; } _behaviorDelegateFlags;
    id<_UIEventDeferringSystemShellBehaviorDelegate> _systemShellBehaviorDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEventDeferringManager:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)systemShellBehaviorDelegate;
- (long long)compareRemoteRuleOwningElement:(id)a0 toElement:(id)a1 inEnvironment:(id)a2;
- (BOOL)wantsLocalCompatibilityRules;
- (BOOL)shouldSuppressRemoteRuleForOwningElement:(id)a0 inEnvironment:(id)a1;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (void).cxx_destruct;
- (void)setSystemShellBehaviorDelegate:(id)a0;

@end
