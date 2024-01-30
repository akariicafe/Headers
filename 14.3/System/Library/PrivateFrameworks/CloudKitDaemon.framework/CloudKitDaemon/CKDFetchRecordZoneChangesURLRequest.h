@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSMutableArray, NSString;

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>

@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (retain, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *zoneIDsByRequestOperationUUID;
@property (retain, nonatomic) NSMutableDictionary *requestResultsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *nodeErrorsByZoneID;
@property (retain, nonatomic) NSMutableArray *recordResponses;
@property (nonatomic) long long changeTypes;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (copy, nonatomic) id /* block */ recordsChangedBlock;
@property (copy, nonatomic) id /* block */ recordDeletedBlock;
@property (readonly, nonatomic) NSDictionary *resultsByRecordZoneID;
@property (readonly, nonatomic) NSDictionary *zoneErrorsByZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)allowsAnonymousAccount;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)zoneIDsToLock;
- (id)requestOperationClasses;
- (BOOL)requestGETPreAuth;
- (void)requestDidComplete;
- (id)initWithOperation:(id)a0 recordZoneIDs:(id)a1 configurationsByRecordZoneID:(id)a2;
- (id)_handleRecordChanges:(id)a0;

@end
