@class NSObject;
@protocol OS_dispatch_queue;

@interface ENStoreClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invokeAsyncBoolBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invokeAsyncInt32Block:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invokeAsyncObjectBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)invokeAsyncBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
