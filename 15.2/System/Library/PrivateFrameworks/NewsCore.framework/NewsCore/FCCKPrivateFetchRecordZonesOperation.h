@class NSDictionary, NSArray;

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSDictionary *resultRecordZonesByZoneID;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
