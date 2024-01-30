@class NSObject;
@protocol OS_dispatch_queue;

@interface NRMockXPCProxy : NSProxy {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _async;
    id _target;
}

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
