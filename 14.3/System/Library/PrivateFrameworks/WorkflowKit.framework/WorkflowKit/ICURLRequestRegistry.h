@class NSMutableArray, NSMutableDictionary;

@interface ICURLRequestRegistry : NSObject

@property (retain, nonatomic) NSMutableArray *activeRequests;
@property (retain, nonatomic) NSMutableDictionary *requestHandlers;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 scheme:(id)a2;
- (void)removeHandlerForIncomingRequestsWithAction:(id)a0 scheme:(id)a1;
- (id /* block */)handlerForIncomingRequestWithAction:(id)a0 scheme:(id)a1;
- (void)registerOutgoingRequest:(id)a0;
- (id)popRequest:(id)a0;
- (id)popActiveRequest;
- (id)popRequestWithUUID:(id)a0;

@end
