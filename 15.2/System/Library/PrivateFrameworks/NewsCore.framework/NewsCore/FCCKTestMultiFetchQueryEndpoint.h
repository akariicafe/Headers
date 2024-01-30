@class NSString;

@interface FCCKTestMultiFetchQueryEndpoint : NSObject <FCCKTestQueryEndpoint>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleQueryOperation:(id)a0 withRecords:(id)a1 droppedFeeds:(id)a2;
- (id)_collectRecordsWithRecords:(id)a0 recordIDs:(id)a1 linkKeysByRecordType:(id)a2 visitedRecordIDs:(id)a3 missingRecordIDs:(id)a4;
- (id)_collectRecordIDsFromRecords:(id)a0 linkKeysByRecordType:(id)a1;

@end
