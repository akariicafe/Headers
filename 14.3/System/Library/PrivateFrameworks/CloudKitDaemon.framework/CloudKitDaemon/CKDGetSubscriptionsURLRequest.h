@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID;
@property (copy, nonatomic) id /* block */ subscriptionFetchedBlock;

- (id)initWithOperation:(id)a0 subscriptionIDs:(id)a1;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestOperationClasses;

@end
