@class NSString, NSSet, FLPreferencesFollowUpItemListViewController, PSListController;
@protocol FLViewModel;

@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate> {
    id<FLViewModel> _topViewModel;
    FLPreferencesFollowUpItemListViewController *_spyglassController;
    NSSet *_spyglassWhitelist;
    BOOL _activityIndicatorActive;
}

@property (weak, nonatomic) PSListController *listViewController;
@property (copy, nonatomic) id /* block */ itemChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)startSpinnerForSpecifier:(id)a0;
- (void)preflightNetworkConnectivityForHandler:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)stopSpinnerForSpecifier:(id)a0;
- (void)startPresentingForHandler:(id)a0 withRemoteController:(id)a1;
- (id)_specifierForGroup:(id)a0;
- (id)_specifierForItem:(id)a0 group:(id)a1;
- (id)_deferredLoadSpecifierWithName:(id)a0;
- (id)_urlBasedSpecifierWithName:(id)a0;
- (void)_updateSpecifier:(id)a0 withCommonPropertiesForGroup:(id)a1;
- (void)loadSpecifier:(id)a0;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)a0;
- (void)_handleEmptyRefreshResult:(id)a0;
- (void)_presentSpecifier:(id)a0;
- (void)_zeroActionFailure:(id)a0;
- (id)topLevelSpecifiers;
- (id)spyglassSpecifiers;

@end
