@class NSMutableArray, NSMutableSet;

@interface TCKDatabase : NSObject

@property (retain, nonatomic) NSMutableArray *tQueriedRecordTypes;
@property (retain, nonatomic) NSMutableArray *tQueriedRecordZonesNames;
@property (retain, nonatomic) NSMutableArray *tFetchedRecords;
@property (retain, nonatomic) NSMutableArray *tFetchedChangedRecordZoneNames;
@property (retain, nonatomic) NSMutableArray *tQueriedRecords;
@property (retain, nonatomic) NSMutableArray *tSavedRecords;
@property (retain, nonatomic) NSMutableSet *tSavedRecordIDs;
@property (retain, nonatomic) NSMutableArray *tSavedZones;
@property (retain, nonatomic) NSMutableArray *tDeletedZoneIDs;
@property (retain, nonatomic) NSMutableArray *tDeletedRecordIDs;
@property (retain, nonatomic) NSMutableArray *tSavedSubscriptions;
@property (copy, nonatomic) id /* block */ tQueryHandler;
@property (copy, nonatomic) id /* block */ tFetchRecordsHandler;
@property (copy, nonatomic) id /* block */ tModifyRecordsOperationHandler;
@property (copy, nonatomic) id /* block */ tModifyRecordsHandler;
@property (copy, nonatomic) id /* block */ tFetchZonesHandler;
@property (copy, nonatomic) id /* block */ tModifyZonesHandler;
@property (copy, nonatomic) id /* block */ tFetchZoneChangesHandler;
@property (copy, nonatomic) id /* block */ tFetchRecordZoneChangesOperationHandler;
@property (copy, nonatomic) id /* block */ tFetchDatabaseChangesHandler;

+ (id)tRecordsForQuery:(id)a0 zoneID:(id)a1;

- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)fetchRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)performQuery:(id)a0 inZoneWithID:(id)a1 completionHandler:(id /* block */)a2;

@end
