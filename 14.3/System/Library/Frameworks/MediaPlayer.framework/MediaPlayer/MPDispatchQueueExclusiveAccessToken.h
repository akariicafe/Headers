@class NSObject;
@protocol OS_dispatch_queue;

@interface MPDispatchQueueExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id _owner;
}

+ (id)tokenWithQueue:(id)a0 owner:(id)a1;

- (void).cxx_destruct;
- (void)assertHasExclusiveAccessForOwner:(id)a0;
- (id)_init;

@end
