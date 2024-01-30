@class NSArray, NSString, NSMutableDictionary;

@interface CKDFetchRecordVersionsRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic) BOOL isDeleted;
@property (copy, nonatomic) id /* block */ recordVersionsFetchedBlock;
@property (nonatomic) BOOL shouldFetchAssetContent;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)zoneIDsToLock;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordIDs:(id)a1 desiredKeys:(id)a2 minimumVersionETag:(id)a3;

@end
