@class NSArray, NSMutableDictionary, NSDate;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate;
@property (copy, nonatomic) id /* block */ recordZoneModifiedBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0 recordZonesToSave:(id)a1 recordZoneIDsToDelete:(id)a2;
- (id)zoneIDsToLock;
- (void).cxx_destruct;

@end
