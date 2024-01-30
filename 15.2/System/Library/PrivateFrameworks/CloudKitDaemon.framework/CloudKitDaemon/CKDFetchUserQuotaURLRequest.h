@interface CKDFetchUserQuotaURLRequest : CKDURLRequest

@property (copy, nonatomic) id /* block */ quotaFetchedBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;

@end
