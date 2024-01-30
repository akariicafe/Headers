@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface ICDelegationConsumerServiceProtocolHandler : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)getResponseForFinishDelegationRequest:(id)a0 withSessionIDToRequestInfoMap:(id)a1 completionHandler:(id /* block */)a2;
- (void)getResponseForStartDelegationRequest:(id)a0 requestContext:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
