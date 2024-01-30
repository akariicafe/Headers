@class NSString;

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest

@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) id /* block */ tokenFetchedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (void).cxx_destruct;

@end
