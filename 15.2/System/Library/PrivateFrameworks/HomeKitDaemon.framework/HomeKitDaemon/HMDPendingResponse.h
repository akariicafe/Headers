@class NSString, HMFMessage, NSMutableArray;

@interface HMDPendingResponse : HMFObject

@property (retain, nonatomic) HMFMessage *requestMessage;
@property (retain, nonatomic) NSString *originalRequestIdentifier;
@property (nonatomic) unsigned long long pendingResponseCount;
@property (nonatomic) unsigned long long totalRequestsCount;
@property (retain, nonatomic) NSMutableArray *allResponses;
@property (retain, nonatomic) NSMutableArray *latestResponses;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (nonatomic) double creationTime;

+ (id)tupleForMessage:(id)a0 originalRequestIdentifier:(id)a1 requestCount:(unsigned long long)a2 withCompletionHandler:(id /* block */)a3;

- (id)description;
- (void).cxx_destruct;
- (void)addToPendingResponses:(id)a0;
- (void)addResponsesToPendingResponse:(id)a0;
- (id)retrieveAndClearAllResponses;
- (id)retrieveAndClearLatestResponses;

@end
