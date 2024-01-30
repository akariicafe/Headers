@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ASAsyncTransactionQueue : NSObject {
    NSObject<OS_dispatch_queue> *_lockingQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_description;
}

- (void).cxx_destruct;
- (void)performTransaction:(id /* block */)a0;
- (id)initWithDescription:(id)a0 targetSerialQueue:(id)a1;

@end
