@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordIDsToArchive:(id)a1;

@end
