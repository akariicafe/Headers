@class NSArray, NSMutableDictionary, CKRecordZoneID;

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) id /* block */ subscriptionModifiedBlock;

- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 subscriptionsToSave:(id)a1 subscriptionIDsToDelete:(id)a2;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;

@end
