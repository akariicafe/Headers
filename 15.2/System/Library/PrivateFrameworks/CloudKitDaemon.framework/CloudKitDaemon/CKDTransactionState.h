@class CKDAssetBatch, NSMutableDictionary;

@interface CKDTransactionState : NSObject

@property (retain, nonatomic) CKDAssetBatch *assetBatch;
@property (retain, nonatomic) NSMutableDictionary *itemsByAssetId;

- (void).cxx_destruct;
- (id)init;

@end
