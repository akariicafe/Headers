@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) id /* block */ tokenFetchedBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;

@end
