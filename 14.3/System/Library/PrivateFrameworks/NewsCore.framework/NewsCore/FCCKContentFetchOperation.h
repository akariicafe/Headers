@class NSArray, NSDictionary, FCCKContentDatabase;

@interface FCCKContentFetchOperation : FCNetworkOperation

@property (copy, nonatomic) NSArray *requestUUIDs;
@property (retain, nonatomic) NSDictionary *resultRecordsByRecordID;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) BOOL getPermanentAssetURLs;
@property (copy, nonatomic) id /* block */ perRecordCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordsCompletionBlock;
@property (nonatomic) int networkEventType;

- (id)init;
- (void).cxx_destruct;
- (id)throttleGroup;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_operationForRecordID:(id)a0;

@end
