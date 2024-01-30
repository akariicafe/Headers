@class NSObject;
@protocol OS_dispatch_semaphore;

@interface CCVegaTransactionMainThreadOperation : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
    id /* block */ _block;
}

- (void)runBlock;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)waitForBlockReady;
- (void)provideBlock:(id /* block */)a0;

@end
