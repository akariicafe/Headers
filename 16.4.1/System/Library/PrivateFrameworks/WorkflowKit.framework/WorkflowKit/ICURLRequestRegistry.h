@class NSMutableArray, NSMutableDictionary;

@interface ICURLRequestRegistry : NSObject

@property (retain, nonatomic) NSMutableArray *activeRequests;
@property (retain, nonatomic) NSMutableDictionary *requestHandlers;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id /* block */)handlerForIncomingRequestWithAction:(id)a0 scheme:(id)a1;
- (id)popActiveRequest;
- (id)popRequest:(id)a0;
- (id)popRequestWithUUID:(id)a0;
- (void)registerHandler:(id /* block */)a0 forIncomingRequestsWithAction:(id)a1 scheme:(id)a2;
- (void)registerOutgoingRequest:(id)a0;
- (void)removeHandlerForIncomingRequestsWithAction:(id)a0 scheme:(id)a1;

@end
