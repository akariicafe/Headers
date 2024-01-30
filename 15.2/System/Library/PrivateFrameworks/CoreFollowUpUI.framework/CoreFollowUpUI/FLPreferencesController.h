@class NSString, NSArray, NSSet, FLPreferencesFollowUpItemListViewController, PSListController, AIDAServiceOwnersManager;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate> {
    id<FLViewModel> _topViewModel;
    FLPreferencesFollowUpItemListViewController *_spyglassController;
    FLPreferencesFollowUpItemListViewController *_topLevelItemList;
    NSArray *_groups;
    NSSet *_spyglassAllowList;
    BOOL _activityIndicatorActive;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    NSString *_primaryAccountID;
    NSArray *_secondaryAccountIDs;
}

@property (weak, nonatomic) PSListController *listViewController;
@property (copy, nonatomic) id /* block */ itemChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)_handleEmptyRefreshResult:(id)a0;
- (void)startSpinnerForSpecifier:(id)a0;
- (id)topLevelSpecifiers;
- (id)_urlBasedSpecifierWithName:(id)a0;
- (id)spyglassSpecifiers;
- (void)loadSpecifier:(id)a0;
- (void)stopSpinnerForSpecifier:(id)a0;
- (id)_topLevelSpecifiersForGroup:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startPresentingForHandler:(id)a0 withRemoteController:(id)a1;
- (id)_specifierGroupString:(unsigned long long)a0;
- (id)_specifiersForItem:(id)a0 group:(id)a1;
- (void)preflightNetworkConnectivityForHandler:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_presentSpecifier:(id)a0;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)a0;
- (id)_deferredLoadSpecifierWithName:(id)a0;
- (void)_updateSpecifier:(id)a0 withCommonPropertiesForGroup:(id)a1;
- (id)_specifierForGroup:(id)a0;
- (id)topLevelSpecifiersForGroup:(unsigned long long)a0;
- (void)_zeroActionFailure:(id)a0;

@end
