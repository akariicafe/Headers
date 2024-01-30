@class NSCountedSet, UIScene, NSString, NSMutableDictionary, NSMapTable;
@protocol _UIEventDeferringBehavior, _UIEventDeferringSystemShellBehaviorDelegate, _UISceneUIWindowHosting, BSInvalidatable;

@interface _UIEventDeferringManager : NSObject <_UIWindowHostingSceneComponentProviding, _UIEventDeferringEnvironmentTargetProviding, _UIEventDeferringManagerCoordinating, BSDebugDescriptionProviding, _UIEventDeferringRuleOwning> {
    unsigned long long _currentState;
    NSMutableDictionary *_localDeferringRecordsByEnvironment;
    NSMutableDictionary *_remoteDeferringRecordStacksByEnvironment;
    NSMapTable *_targetWindowProvidersByEnvironment;
    NSMutableDictionary *_trackedLocalTargetWindowPointersByEnvironment;
    NSCountedSet *_localTargetWindowPointersUnderObservation;
    NSString *_previousExternalScreenIdentifier;
    id<BSInvalidatable> _stateCaptureToken;
    _Atomic long long _bufferingAssertionCount;
    struct { unsigned char hasInvalidated : 1; unsigned char evaluatedInitialExternalScreenDisconnection : 1; unsigned char processingScreenIdentifierWillChange : 1; unsigned char processedScreenIdentifierWillChange : 1; unsigned char processingScreenIdentifierDidChange : 1; } _deferringManagerFlags;
    id<BSInvalidatable> _transactionAssertion;
}

@property (class, weak, nonatomic) id<_UIEventDeferringSystemShellBehaviorDelegate> systemShellBehaviorDelegate;

@property (readonly, weak, nonatomic) UIScene<_UISceneUIWindowHosting> *windowHostingScene;
@property (readonly, nonatomic) id<_UIEventDeferringBehavior> behavior;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)localEventDeferringTargetWindowForEnvironment:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_screenUniqueIdWillChange:(id)a0;
- (void)_sceneWillInvalidate:(id)a0;
- (void)_screenUniqueIdDidChange:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)setNeedsRemoteEventDeferringRuleComparisonInEnvironments:(id)a0 forBehaviorDelegate:(id)a1 withReason:(id)a2;
- (void)_localTargetWindowDidDetachContext:(id)a0;
- (void)dealloc;
- (void)eventDeferringManager:(id)a0 didRemoveLocalCompatibilityRecordForDescriptor:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)interfaceElementCategory;
- (void)_localTargetWindowDidAttachContext:(id)a0;
- (void).cxx_destruct;
- (void)_windowHostingScene:(id)a0 didMoveFromScreen:(id)a1 toScreen:(id)a2;

@end
