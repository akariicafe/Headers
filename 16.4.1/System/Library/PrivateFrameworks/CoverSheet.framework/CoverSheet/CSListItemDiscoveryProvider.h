@class CSListItemSection, NSString, NSMutableDictionary, DNDStateService;
@protocol CSListItemManaging;

@interface CSListItemDiscoveryProvider : NSObject <ATXUserEducationSuggestionObserver, DNDStateUpdateListener, FCUIOnboardingPlatterDiscoveryViewDelegate, CSDiscoveryItemExplorePostersPlatterViewDelegate, CSListItemProviding> {
    DNDStateService *_stateService;
}

@property (class, readonly, copy, nonatomic) CSListItemSection *section;

@property (retain, nonatomic) NSMutableDictionary *discoveryTypeToDiscoverySuggestionAndListItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<CSListItemManaging> itemManager;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (nonatomic) BOOL listHasAdditionalContent;
@property (readonly, nonatomic) id /* block */ itemsGroupSortComparator;
@property (readonly, nonatomic) id /* block */ itemsViewControllerSortComparator;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)willPresentPosterSwitcher;
- (id)init;
- (void).cxx_destruct;
- (void)didReceiveUserEducationSuggestionEvent:(id)a0;
- (id)_customizeFocusDiscoveryViewWithDNDSemanticType:(long long)a0;
- (id)_discoveryTypeForSuggestion:(id)a0;
- (id)_explorePostersDiscoveryItemViewControllerForPlatter:(id)a0 firstDidAppearCompletion:(id /* block */)a1;
- (id)_explorePostersDiscoveryView;
- (void)_handleDismissSuggestion:(id)a0 type:(id)a1;
- (void)_handleShowSuggestion:(id)a0 type:(id)a1 isPrototyping:(BOOL)a2;
- (void)_presentPlatterDiscoveryView:(id)a0 discoveryItemViewController:(id)a1 withSuggestion:(id)a2 type:(id)a3;
- (void)_prototypeTest_addItem;
- (void)_prototypeTest_registerRecipe;
- (void)_prototypeTest_removeItem;
- (void)_removeDiscoveryOfType:(id)a0;
- (id)_sleepMigrationDiscoveryView;
- (void)explorePostersPlatterViewWasTapped:(id)a0;
- (void)handleRemovedItems:(id)a0;
- (void)onboardingPlatter:(id)a0 requestsModalPresentationOfViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)onboardingPlatterRequestsDismissal:(id)a0;

@end
