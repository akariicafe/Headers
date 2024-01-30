@class NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTNoContentTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
