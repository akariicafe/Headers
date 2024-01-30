@class NSObject;
@protocol OS_dispatch_queue;

@interface SPRConfigurator : SPRObject {
    NSObject<OS_dispatch_queue> *_relayQueue;
}

- (id)initWithConnector:(id /* block */)a0;
- (void).cxx_destruct;
- (id)prepareAndReturnError:(id *)a0;
- (id)prepare:(id *)a0;
- (id)statusAndReturnError:(id *)a0;
- (void)installAsyncWithToken:(id)a0 callback:(id)a1;
- (void)installAsyncWithToken:(id)a0 force:(BOOL)a1 callback:(id)a2;
- (id)installWithToken:(id)a0 error:(id *)a1;
- (void)installWithToken:(id)a0 force:(BOOL)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (id)installWithToken:(id)a0 force:(BOOL)a1 error:(id *)a2;
- (id)prepareWithForce:(BOOL)a0 error:(id *)a1;
- (id)statusWithToken:(id)a0 error:(id *)a1;
- (id)statusWithToken:(id)a0 options:(long long)a1 error:(id *)a2;

@end
