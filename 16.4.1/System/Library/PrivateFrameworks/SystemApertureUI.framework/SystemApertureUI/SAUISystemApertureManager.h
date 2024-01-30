@class NSArray, NSString, NSMapTable, NSMutableSet, NSPointerArray, UIViewController;
@protocol SAElementConsidering, SAUIElementViewControlling, SAUISystemApertureManagerDelegate;

@interface SAUISystemApertureManager : NSObject <SAElementHosting, SAAlertingConfiguring, SAUILayoutHostingPrivate, SAUILayoutSpecifyingOverridingParticipant, SAUIElementViewControllingObserving, SAElementRegistering> {
    id<SAElementConsidering> _elementAuthority;
    NSMapTable *_elementsToElementViewControllers;
    NSMutableSet *_removedElementViewControllers;
    NSPointerArray *_elements;
    NSMapTable *_elementsToAssertions;
    NSMapTable *_elementsToInvalidatedAssertions;
    NSArray *_temporallyOrderedElements;
    NSPointerArray *_mostPromotedElements;
    UIViewController<SAUIElementViewControlling> *_indicatorElementViewController;
    BOOL _promotedStateIsValid;
}

@property (weak, nonatomic) id<SAUISystemApertureManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *orderedElementViewControllers;
@property (readonly, nonatomic) UIViewController<SAUIElementViewControlling> *indicatorElementViewController;
@property (readonly, copy, nonatomic) NSArray *registeredElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long behaviorOverridingRole;

+ (void)initialize;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interSensorRegionInContentView:(id)a0;
- (BOOL)_axLayoutSpecifierRequestsCollapseIfExpandedByUserInteraction:(id)a0;
- (void)_axLayoutSpecifierRequestsDiminishment:(id)a0;
- (void)_removeAssertionForElement:(id)a0;
- (double)alertingDurationForHost:(id)a0;
- (double)concentricPaddingForProvidedView:(id)a0 fromViewProvider:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeOutsetsForSize:(struct CGSize { double x0; double x1; })a0;
- (id)elementAssertionForElement:(id)a0;
- (void)elementRequestsNegativeResponse:(id)a0;
- (void)elementRequestsSignificantUpdateTransition:(id)a0;
- (id)elementViewControllerForElement:(id)a0;
- (void)elementViewControllingDidDisappear:(id)a0;
- (void)hostWillPerformLayout;
- (id)initWithElementAuthority:(id)a0;
- (void)invalidatePromotedElements;
- (void)menuPresentationRequestDidChangeForLayoutSpecifier:(id)a0;
- (void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id)a0;
- (void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id)a0;
- (id)registerElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sensorRegionInContentView:(id)a0 fromViewProvider:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sensorRegionObstructingViewProvider:(id)a0 inContentView:(id)a1;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1 forTargetWithOverrider:(id)a2;
- (double)viewProviderSensorShadowOpacityFactor:(id)a0;
- (BOOL)viewProviderShouldAvoidAppearanceTransitionInitialization:(id)a0;
- (BOOL)viewProviderShouldMakeSensorShadowVisible:(id)a0;
- (void)_elementAssertionDidInvalidate:(id)a0;
- (void)_addInvalidatedAssertion:(id)a0 forElement:(id)a1;
- (id)_assertionForElement:(id)a0;
- (id)_assertionForElementCreatingIfNecessary:(id)a0;
- (void)_compactElements;
- (id)_elementViewControllerForElement:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void)_invalidatePromotedState;
- (void)_invalidateTemporallyOrderedElements;
- (id)_invalidatedAssertionForElement:(id)a0;
- (unsigned long long)_maximumNumberOfSimultaneouslyVisibleElements;
- (void)_purgeRemovedElementViewControllers;
- (void)_reevaluatePromotedElements;
- (void)_removeElementViewController:(id)a0;
- (void)_removeInvalidatedAssertionForElement:(id)a0;
- (void)_requestHostNeedsLayout;
- (id)_temporallyOrderedVisibleAlertAndActivityElements;

@end
