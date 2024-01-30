@class NSError, NSArray, CKRecordID, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray, FCCKContentDatabase;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *remainingRecordIDBatches;
@property (retain, nonatomic) NSMutableSet *refreshedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *updatedRecordsByRecordID;
@property (retain, nonatomic) NSMutableSet *deletedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *errorsByRecordID;
@property (retain, nonatomic) NSError *operationError;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSDictionary *changeTagsByRecordID;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) BOOL checkForDeletions;
@property (copy, nonatomic) CKRecordID *canaryRecordID;
@property (copy, nonatomic) id /* block */ refreshRecordsCompletionBlock;

- (void)prepareOperation;
- (void)resetForRetry;
- (void)_continueRefreshing;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
