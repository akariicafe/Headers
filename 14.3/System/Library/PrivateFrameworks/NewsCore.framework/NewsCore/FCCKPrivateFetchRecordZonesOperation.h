@class NSDictionary, NSArray;

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSDictionary *resultRecordZonesByZoneID;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
