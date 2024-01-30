@class NMSMediaContainerQuotaData;

@interface NMSMediaItemGroup : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id referenceObj;
@property (retain, nonatomic) NMSMediaContainerQuotaData *quotaData;
@property (nonatomic) BOOL manuallyAdded;
@property (readonly, nonatomic) BOOL isEstimate;
@property (nonatomic) BOOL downloadedItemsOnly;

+ (id)itemGroupWithSyncedPlaylistID:(id)a0 downloadedItemsOnly:(BOOL)a1;
+ (id)itemGroupWithSyncedAlbumID:(id)a0 downloadedItemsOnly:(BOOL)a1;
+ (id)itemGroupWithRecommendation:(id)a0 downloadedItemsOnly:(BOOL)a1;
+ (id)itemGroupWithPodcastStationUUID:(id)a0 downloadedItemsOnly:(BOOL)a1;
+ (id)itemGroupWithPodcastFeedURL:(id)a0 downloadOrder:(unsigned long long)a1 episodeLimit:(unsigned long long)a2 manuallyAdded:(BOOL)a3 downloadedItemsOnly:(BOOL)a4;
+ (id)itemGroupWithAudiobookIdentifier:(id)a0 downloadLimit:(unsigned long long)a1 manuallyAdded:(BOOL)a2 downloadedItemsOnly:(BOOL)a3;
+ (id)sharedLibraryRequestQueue;
+ (id)_itemsForContainerClass:(Class)a0 containerIDs:(id)a1 includingNonLibraryContent:(BOOL)a2 includingDownloadedContentOnly:(BOOL)a3 manuallyAdded:(BOOL)a4;
+ (id)itemGroupWithQuotaRefObj:(id)a0;

- (id)itemList;
- (id)identifiers;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToContainer:(id)a0;
- (id)identifiersForContainerType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 refObj:(id)a1 manuallyAdded:(BOOL)a2 quotaRefObj:(id)a3 downloadedItemsOnly:(BOOL)a4;

@end
