@class NSOperationQueue;

@interface VSViewServiceRequestCenter : NSObject

@property (retain, nonatomic) NSOperationQueue *requestQueue;
@property (retain, nonatomic) NSOperationQueue *completionQueue;

+ (id)sharedViewServiceRequestCenter;

- (id)init;
- (void).cxx_destruct;
- (id)enqueueCompletionHandlerBlock:(id /* block */)a0;
- (id)enqueueRequest:(id)a0 withAccountManagerDelegate:(id)a1 operationDelegate:(id)a2 completionHandler:(id /* block */)a3;

@end
