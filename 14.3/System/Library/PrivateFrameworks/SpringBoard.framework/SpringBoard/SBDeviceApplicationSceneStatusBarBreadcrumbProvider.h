@class NSString, SBDeviceApplicationSceneHandle, NSHashTable, SBBreadcrumbActionContext, SiriBreadcrumbSource;

@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject <SBDeviceApplicationSceneHandleObserver> {
    SiriBreadcrumbSource *_siriSource;
    SBBreadcrumbActionContext *_currentBreadcrumbActionContext;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL hasBreadcrumb;
@property (readonly, copy, nonatomic) NSString *breadcrumbTitle;
@property (readonly, copy, nonatomic) NSString *breadcrumbSecondaryTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_breadcrumbBundleIdForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
+ (BOOL)_shouldAddBreadcrumbToActivatingSceneEntity:(id)a0 sceneHandle:(id)a1 withTransitionContext:(id)a2;
+ (id)_breadcrumbPrimaryTitleForAppWithBundleID:(id)a0 sceneHandle:(id)a1 activatingSceneEntity:(id)a2;
+ (id)_destinationContextsForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
+ (id)_breadcrumbSceneIdForForAppWithBundleID:(id)a0 activatingSceneEntity:(id)a1 withTransitionContext:(id)a2;

- (id)initWithSceneHandle:(id)a0;
- (void).cxx_destruct;
- (void)_installedApplicationsDidChange:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_handleBreadcrumbAction:(unsigned long long)a0 analyticsSide:(unsigned long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)activateBreadcrumbIfPossible;
- (void)addObserver:(id)a0;
- (void)sceneHandle:(id)a0 didChangeEffectiveForegroundness:(BOOL)a1;
- (void)prepareForReuse;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)noteDidUpdateDisplayProperties;
- (void)captureContextForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
- (void)_activateBreadcrumbApplication:(id)a0 withSceneIdentifier:(id)a1;
- (id)breadcrumbActionsForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
- (id)succinctDescriptionBuilder;
- (long long)_openStrategyForAppLinkState:(id)a0;
- (BOOL)_hasPrimaryBreadcrumb;
- (void)_presentSpotlightFromBreadcrumb;
- (BOOL)activateSecondaryBreadcrumbIfPossible;
- (void)_activateAppLink:(id)a0 withAppLinkState:(id)a1 wasFromSpotlight:(BOOL)a2 previousSideBundleID:(id)a3 previousBreadcrumb:(id)a4;
- (BOOL)_hasSecondaryBreadcrumb;
- (id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
- (BOOL)_showTransientOvelayInPlace;
- (void)_presentAssistantFromBreadcrumb;
- (void)_setCurrentBreadcrumbActionContext:(id)a0;

@end
