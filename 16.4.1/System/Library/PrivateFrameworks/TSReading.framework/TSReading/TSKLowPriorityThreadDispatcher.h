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

- (id)retain;
- (oneway void)release;
- (void)suspend;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)autorelease;
- (void)resume;
- (unsigned long long)retainCount;
- (id)p_dispatchQueue;

@end
