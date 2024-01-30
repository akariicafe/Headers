@interface CKDFetchUserQuotaURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ quotaFetchedBlock;

- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;

@end
