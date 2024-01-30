@class CKUploadRequestMetadata;

@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest

@property (copy, nonatomic) CKUploadRequestMetadata *metadata;
@property (nonatomic) BOOL writeRepairRecord;
@property (copy, nonatomic) id /* block */ assetBrokenBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 assetOrPackageMetadata:(id)a1 writeRepairRecord:(BOOL)a2;

@end
