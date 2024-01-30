@class NSString, FLItemChangeObserver, FLFollowUpController;

@interface FLTopLevelViewModel : NSObject <FLViewModel> {
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) NSString *localizedDeviceRowTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_prefixFromBundleIdentifier:(id)a0;
+ (id)redirectURLForItem:(id)a0 withAction:(id)a1;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)groups;
- (id)allPendingItems;
- (void)setItemChangeHandler:(id /* block */)a0;
- (void)refreshItems:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)refreshItemsForItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 clientIdentifier:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 controller:(id)a1;
- (id)extensionToItemMapFromItems:(id)a0;
- (void)_refreshItemsWithExtensionToItemMap:(id)a0 completion:(id /* block */)a1;
- (void)mapItemsToGroups:(id)a0;
- (BOOL)allPendingItemsContains:(id)a0;

@end
