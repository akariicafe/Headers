@class NSArray, NSDictionary, NSMutableSet, FCEdgeCacheHint, NSMutableArray, FCCKContentDatabase;

@interface FCCKMultiFetchQueryOperation : FCOperation

@property (retain, nonatomic) NSDictionary *recordSpecsByType;
@property (retain, nonatomic) NSMutableArray *resultFetchedRecords;
@property (retain, nonatomic) NSMutableSet *resultMissingRecordIDs;
@property (copy, nonatomic) NSArray *networkEvents;
@property (retain, nonatomic) FCCKContentDatabase *database;
@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *recordSpecs;
@property (retain, nonatomic) NSDictionary *knownRecordIDsToEtags;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (copy, nonatomic) id /* block */ queryCompletionHandler;

- (void)prepareOperation;
- (void).cxx_destruct;
- (id)_desiredKeys;
- (id)_constructQuery;
- (BOOL)validateOperation;
- (void)performOperation;
- (unsigned long long)_queryPriority;
- (void)operationWillFinishWithError:(id)a0;

@end
