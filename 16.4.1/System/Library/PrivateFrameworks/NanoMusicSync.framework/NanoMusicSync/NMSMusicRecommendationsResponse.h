@class NSData, NMSMutableMediaSyncInfo, NSOrderedSet;

@interface NMSMusicRecommendationsResponse : NSObject

@property (readonly, nonatomic) NSData *cachedData;
@property (readonly, nonatomic) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (readonly, nonatomic) NSOrderedSet *recommendations;

- (id)initWithCachedData:(id)a0 importedStoreContainerItemMappings:(id)a1 recommendations:(id)a2;
- (void).cxx_destruct;

@end
