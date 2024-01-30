@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) id /* block */ tokenFetchedBlock;

- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;

@end
