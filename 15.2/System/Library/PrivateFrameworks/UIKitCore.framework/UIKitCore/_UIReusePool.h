@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _UIReusePool : NSObject {
    NSMutableSet *_reuseSet;
    unsigned long long _purgePolicy;
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;
}

@property (readonly, nonatomic) unsigned long long purgePolicy;

+ (void)initialize;
+ (void)__applicationWillEnterForeground:(id)a0;
+ (void)__applicationDidEnterBackground:(id)a0;

- (void)drainPool;
- (id)initWithPolicy:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;
- (id)reusableObject;

@end
