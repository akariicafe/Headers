@class NSString, OspreyDeferredObject, NSObject;
@protocol OS_dispatch_queue;

@interface OspreyRPCPromise : NSObject <OspreyRPC> {
    NSObject<OS_dispatch_queue> *_fulfillmentQueue;
    OspreyDeferredObject *_deferredRPC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)serverStreamingRequestWithMethodName:(id)a0 requestData:(id)a1 requestBuilder:(id /* block */)a2 streamingResponseHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fulfill:(id)a0;
- (id)bidirectionalStreamingRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1 streamingResponseHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (id)clientStreamingRequestWithMethodName:(id)a0 requestBuilder:(id /* block */)a1 responseHandler:(id /* block */)a2;
- (id)initWithFulfillmentQueue:(id)a0;
- (void)unaryRequestWithMethodName:(id)a0 requestData:(id)a1 requestBuilder:(id /* block */)a2 responseHandler:(id /* block */)a3;

@end
