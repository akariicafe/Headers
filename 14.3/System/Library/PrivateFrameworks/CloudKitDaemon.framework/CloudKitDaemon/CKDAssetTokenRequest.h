@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (id)CKPropertiesDescription;
- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addAssetBatch:(id)a0;
- (void)addFailedBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (id)successfulBatches;

@end
