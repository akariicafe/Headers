@class NSArray, NSMutableDictionary;

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *notificationIDs;
@property (retain, nonatomic) NSMutableDictionary *notificationIDsByRequestID;
@property (copy, nonatomic) id /* block */ notificationMarkedReadProgressBlock;

- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)zoneIDsToLock;
- (id)requestOperationClasses;
- (id)initWithOperation:(id)a0 notificationIDsToMarkRead:(id)a1;

@end
