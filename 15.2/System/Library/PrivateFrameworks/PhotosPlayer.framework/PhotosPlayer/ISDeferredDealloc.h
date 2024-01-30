@class NSObject;
@protocol OS_dispatch_queue;

@interface ISDeferredDealloc : NSObject {
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;
}

+ (id)sharedInstance;

- (void)_performDeferredDealloc:(id)a0 withDelay:(double)a1;
- (void)_performDeferredDealloc:(id)a0;
- (id)init;
- (void)dealloc;

@end
