@class NSMutableDictionary;

@interface ADJingleRequestManager : ADSingleton

@property BOOL jingleRequestInProgress;
@property (retain, nonatomic) NSMutableDictionary *pendingJingleRequests;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)authenticateUser:(id /* block */)a0;
- (id)makeSegmentRequest:(id)a0 forceSegments:(BOOL)a1 withCompletion:(id /* block */)a2;
- (BOOL)canMakeJingleRequest;
- (void)jingleRequestCompleted:(id)a0;
- (void)startJingleRequest:(id)a0;

@end
