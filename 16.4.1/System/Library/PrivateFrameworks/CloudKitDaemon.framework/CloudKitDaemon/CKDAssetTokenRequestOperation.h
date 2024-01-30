@class CKDAssetTokenRequest;

@interface CKDAssetTokenRequestOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;

- (int)operationType;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
