@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain, nonatomic) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetGetChunkKeysBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (void)addMMCSItem:(id)a0;
- (void)addRereferencedMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (void)planAssetRequests;
- (void)resetAssetTokenRequests;
- (void)failBatch:(id)a0;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (id)CKPropertiesDescription;
- (BOOL)hasSuccessfulBatches;
- (void)planRegisterBatches;
- (id)description;
- (id)initWithMMCSEncryptionSupport:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)planGetChunkKeysBatches;

@end
