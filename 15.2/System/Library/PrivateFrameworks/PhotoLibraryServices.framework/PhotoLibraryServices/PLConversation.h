@class NSSet, NSString;

@interface PLConversation : PLGenericAlbum <PLCreateFromSearchableItem>

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL albumShouldBeAutomaticallyDeleted;
@property (nonatomic) unsigned short syndicate;
@property (retain, nonatomic) NSSet *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)albumWithConversationID:(id)a0 inLibrary:(id)a1;
+ (id)createOrUpdateObjectFromSearchableItem:(id)a0 library:(id)a1 createIfNeeded:(BOOL)a2 didCreate:(BOOL *)a3 error:(id *)a4;
+ (id)insertNewConversationAlbumWithConversationID:(id)a0 inManagedObjectContext:(id)a1;
+ (id)albumsWithConversationIDs:(id)a0 inLibrary:(id)a1;

- (id)mutableAssets;
- (BOOL)_isDateBeforeStartDate:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)willSave;
- (BOOL)isEmpty;
- (void)_updateStartDate:(id)a0;
- (id)_orderedBatchedAssets;
- (unsigned long long)count;
- (void)updateConversationDatesFromAddedAsset:(id)a0;
- (void)_updateAssetSyndicationState:(unsigned short)a0;
- (BOOL)_isAssetIncludedInConversationDates:(id)a0;
- (BOOL)_isDateAfterEndDate:(id)a0;
- (void)_updateEndDate:(id)a0;

@end
