@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject

@property (retain, nonatomic) NSMutableArray *assetBatches;
@property (retain, nonatomic) NSMutableSet *failedAssetBatches;
@property (nonatomic) unsigned int sizeUpperBound;
@property (nonatomic) unsigned int size;

- (BOOL)isEmpty;
- (void)addFailedBatch:(id)a0;
- (id)successfulBatches;
- (id)CKPropertiesDescription;
- (BOOL)hasSuccessfulBatches;
- (void)addAssetBatch:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
