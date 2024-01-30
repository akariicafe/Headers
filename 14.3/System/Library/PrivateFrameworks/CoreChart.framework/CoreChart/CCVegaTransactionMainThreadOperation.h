@class NSObject;
@protocol OS_dispatch_semaphore;

@interface CCVegaTransactionMainThreadOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id /* block */ _block;
}

- (void)cancel;
- (id)init;
- (void)runBlock;
- (void).cxx_destruct;
- (void)waitForBlockReady;
- (void)provideBlock:(id /* block */)a0;

@end
