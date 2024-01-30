@class NSArray, NSDictionary, NSString, NSMutableDictionary;

@interface MPMusicPlayerStoreQueueDescriptor : MPMusicPlayerQueueDescriptor {
    NSMutableDictionary *_storeFronts;
}

@property (copy, nonatomic) NSDictionary *assetStoreFronts;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSString *startItemID;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStoreIDs:(id)a0;
- (void)setStartTime:(double)a0 forItemWithStoreID:(id)a1;
- (void)setEndTime:(double)a0 forItemWithStoreID:(id)a1;
- (void)setSourceStorefront:(id)a0 forItemWithStoreID:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
