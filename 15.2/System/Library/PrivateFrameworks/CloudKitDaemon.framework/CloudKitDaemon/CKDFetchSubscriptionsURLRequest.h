@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDFetchSubscriptionsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID;
@property (copy, nonatomic) id /* block */ subscriptionFetchedBlock;

- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 subscriptionIDs:(id)a1;

@end
