@class NSSet;
@protocol PLSyndicationSyncManagerDelegate;

@interface PLSyndicationSyncManager : NSObject {
    NSSet *_suppportedQueryTypes;
    unsigned short _savedAssetTypeMask;
}

@property (readonly, weak, nonatomic) id<PLSyndicationSyncManagerDelegate> delegate;

+ (void)_recursiveFindStartDateForMessagesSpotlightItemsWithStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
+ (void)findStartDateForMessagesSpotlightItemsWithCompletionHandler:(id /* block */)a0;

- (BOOL)_canHandleSearchableItem:(id)a0 forQueryType:(long long)a1;
- (BOOL)_deleteGuestAssetWithSyndicationIdentifiers:(id)a0 library:(id)a1;
- (void)_processZombieItem:(id)a0 library:(id)a1;
- (void)_createOrUpdateObjectFromSearchableItem:(id)a0 library:(id)a1;
- (void)syncSyndicationItemsWithStartDate:(id)a0 endDate:(id)a1 queryType:(long long)a2 library:(id)a3 completion:(id /* block */)a4;
- (void)_processSearchableItem:(id)a0 forQueryType:(long long)a1 library:(id)a2;
- (BOOL)_deleteConversationWithSyndicationIdentifiers:(id)a0 library:(id)a1;
- (BOOL)syncSyndicationItemWithUniqueIdentifier:(id)a0 bundleID:(id)a1 queryType:(long long)a2 library:(id)a3 error:(id *)a4;
- (void)_updateSyncTokenWithDate:(id)a0 queryType:(long long)a1 library:(id)a2 syncTokenIsCurrent:(BOOL)a3;
- (id)initWithQueryTypes:(id)a0 savedAssetTypeMask:(unsigned short)a1 delegate:(id)a2;
- (void)_processZombieItems:(id)a0 library:(id)a1;
- (BOOL)_isQueryTypeSupported:(long long)a0;
- (void).cxx_destruct;

@end
