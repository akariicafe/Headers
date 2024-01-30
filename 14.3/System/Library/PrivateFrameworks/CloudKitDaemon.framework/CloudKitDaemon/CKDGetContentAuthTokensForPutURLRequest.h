@class NSDictionary, CKDAssetTokenRequest, NSMapTable;

@interface CKDGetContentAuthTokensForPutURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (retain, nonatomic) NSMapTable *transactionStateByRequestIDs;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) BOOL useEncryption;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0 assetTokenRequest:(id)a1 headers:(id)a2;

@end
