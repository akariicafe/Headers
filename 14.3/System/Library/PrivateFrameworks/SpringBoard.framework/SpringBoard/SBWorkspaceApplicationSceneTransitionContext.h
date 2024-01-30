@class NSMapTable, NSString, NSArray, SBLayoutState, NSSet, NSMutableDictionary, SBMainWorkspaceTransitionRequest, FBSDisplayIdentity, SBWorkspaceEntity;
@protocol SBWorkspaceApplicationSceneTransitionContextDelegate;

@interface SBWorkspaceApplicationSceneTransitionContext : SBWorkspaceTransitionContext <SBDisplayLayoutContext> {
    BOOL _sentActivationResult;
    SBLayoutState *_layoutState;
    SBLayoutState *_previousLayoutState;
    NSMutableDictionary *_requestedWorkspaceEntityForLayoutRoleMutableDictionary;
    NSMapTable *_entityToRemovalContext;
}

@property (retain, nonatomic, setter=_setRequestedActivatingWorkspaceEntity:) SBWorkspaceEntity *requestedActivatingWorkspaceEntity;
@property (nonatomic, setter=_setAlreadyPopulatedRequestedWorkspaceEntities:) BOOL _alreadyPopulatedRequestedWorkspaceEntities;
@property (readonly, weak, nonatomic) SBMainWorkspaceTransitionRequest *request;
@property (nonatomic, getter=isBackground) BOOL background;
@property (nonatomic) BOOL fencesAnimations;
@property (nonatomic) BOOL alwaysRunsWatchdog;
@property (nonatomic) BOOL waitsForSceneUpdates;
@property (nonatomic) BOOL suspendsInlineAppExposeCancellation;
@property (nonatomic) BOOL prefersCrossfadeTransition;
@property (nonatomic, getter=isSceneless) BOOL sceneless;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (readonly, copy, nonatomic) NSSet *applicationSceneEntities;
@property (readonly, copy, nonatomic) NSSet *previousApplicationSceneEntities;
@property (readonly, nonatomic) double watchdogScaleFactor;
@property (readonly, nonatomic) SBLayoutState *previousLayoutState;
@property (weak, nonatomic) id<SBWorkspaceApplicationSceneTransitionContextDelegate> delegate;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL prefersTouchCancellationDisabled;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (retain, nonatomic) SBWorkspaceEntity *activatingEntity;
@property (retain, nonatomic) SBWorkspaceEntity *deactivatingEntity;
@property (nonatomic) long long requestedSpaceConfiguration;
@property (nonatomic) long long requestedFloatingConfiguration;
@property (nonatomic) long long requestedUnlockedEnvironmentMode;
@property (nonatomic) long long requestedFloatingSwitcherVisible;
@property (copy, nonatomic) NSString *requestedAppExposeBundleID;
@property (copy, nonatomic) NSArray *entitiesWithRemovalContexts;
@property (readonly, nonatomic) SBWorkspaceEntity *resolvedActivatingWorkspaceEntity;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) SBLayoutState *layoutState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)compactDescriptionBuilderWithMultilinePrefix:(id)a0;
- (id)previousApplicationSceneEntityForLayoutRole:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)appClipPlaceholderEntities;
- (id)previousAppClipPlaceholderEntities;
- (id)applicationSceneEntityForBundleID:(id)a0;
- (id)applicationSceneEntityForLayoutRole:(long long)a0;
- (void)dealloc;
- (long long)_lockedInterfaceOrientation;
- (id)_displayConfiguration;
- (long long)interfaceOrientationOrPreferredOrientation;
- (id)previousAppClipPlaceholderEntityForBundleID:(id)a0;
- (BOOL)needsToSendActivationResult;
- (id)succinctDescriptionBuilder;
- (void)sendActivationResultError:(id)a0;
- (id)appClipPlaceholderEntityForBundleID:(id)a0;
- (id)removalContextForEntity:(id)a0;
- (id)previousApplicationSceneEntityForBundleID:(id)a0;
- (void)finalize;
- (void)_setRequestedWorkspaceEntity:(id)a0 forLayoutRole:(long long)a1;
- (id)entityForLayoutRole:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForApplicationSceneEntity:(id)a0;
- (void)setEntity:(id)a0 forLayoutRole:(long long)a1;
- (void)setPreviousEntity:(id)a0 forLayoutRole:(long long)a1;
- (void)setRemovalContext:(id)a0 forEntity:(id)a1;
- (id)requestedWorkspaceEntityForLayoutRole:(long long)a0;
- (id)previousEntityForLayoutRole:(long long)a0;

@end
