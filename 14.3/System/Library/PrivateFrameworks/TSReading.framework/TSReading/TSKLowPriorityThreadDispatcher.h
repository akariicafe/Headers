@class NSObject;
@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {
    NSObject<OS_dispatch_queue> *_queue;
    int _suspendCount;
}

@property (readonly, getter=isSuspended) BOOL suspended;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLowPriorityDispatcher;

- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)resume;
- (void)suspend;
- (id)p_dispatchQueue;

@end
