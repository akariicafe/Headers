@class NSString, FLItemChangeObserver, NSMutableDictionary, FLFollowUpController;

@interface FLTopLevelViewModel : NSObject <FLViewModel> {
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_timersByID;
}

@property (copy, nonatomic) NSString *localizedDeviceRowTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_prefixFromBundleIdentifier:(id)a0;
+ (id)redirectURLForItem:(id)a0 withAction:(id)a1;

- (id)groups;
- (void)refreshItemsForItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 controller:(id)a1;
- (id)_groupsForPrimaryAccount:(id)a0 secondaryAccounts:(id)a1 simpleAccountGrouping:(BOOL)a2;
- (id)allPendingItems;
- (id)initWithIdentifier:(id)a0;
- (void)refreshItems:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_updateTimerItems:(id)a0;
- (void)dealloc;
- (void)_configureTimerForItem:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 clientIdentifier:(id)a1;
- (void)mapItems:(id)a0 toGroups:(id)a1 unknownGroup:(id)a2 deviceGroup:(id)a3 simpleAccountGrouping:(BOOL)a4;
- (void)_removeTimerForItem:(id)a0;
- (void).cxx_destruct;
- (void)_refreshItemsWithExtensionToItemMap:(id)a0 completion:(id /* block */)a1;
- (void)setItemChangeHandler:(id /* block */)a0;
- (id)extensionToItemMapFromItems:(id)a0;
- (id)groupsForPrimaryAccount:(id)a0 secondaryAccounts:(id)a1;

@end
