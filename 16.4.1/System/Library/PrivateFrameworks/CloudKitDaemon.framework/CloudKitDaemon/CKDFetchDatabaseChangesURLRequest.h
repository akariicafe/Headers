@class NSString, NSData, CKRecordZoneID, NSMutableArray;

@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining>

@property (retain, nonatomic) CKRecordZoneID *recordZoneID;
@property (retain, nonatomic) NSData *previousServerChangeTokenData;
@property (retain, nonatomic) NSData *serverChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long resultsLimit;
@property (readonly, nonatomic) NSMutableArray *changedZoneIDs;
@property (readonly, nonatomic) NSMutableArray *deletedZoneIDs;
@property (readonly, nonatomic) NSMutableArray *purgedZoneIDs;
@property (readonly, nonatomic) NSMutableArray *encryptedDataResetDeletedZoneIDs;
@property (copy, nonatomic) id /* block */ zoneChangedBlock;
@property (copy, nonatomic) id /* block */ zoneDeletedBlock;
@property (copy, nonatomic) id /* block */ zonePurgedBlock;
@property (copy, nonatomic) id /* block */ zoneDeletedDueToEncryptedDataResetBlock;
@property (copy, nonatomic) id /* block */ anonymousShareProcessingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (BOOL)allowsAnonymousAccount;
- (id)initWithOperation:(id)a0 previousServerChangeTokenData:(id)a1;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;

@end
