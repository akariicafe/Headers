@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (id)CKPropertiesDescription;
- (void)addAssetBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (id)successfulBatches;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (void)addFailedBatch:(id)a0;

@end
