@class NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTNoContentTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
