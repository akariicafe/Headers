@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface OspreyDeferredObject : NSObject {
    id _promised;
    NSObject<OS_dispatch_queue> *_deferralQueue;
    NSObject<OS_dispatch_queue> *_fulfillmentQueue;
    NSObject<OS_dispatch_group> *_fulfillmentGroup;
}

- (void).cxx_destruct;
- (void)fulfill:(id)a0;
- (void)fulfilledWithCompletion:(id /* block */)a0;
- (id)initWithFulfillmentQueue:(id)a0;

@end
