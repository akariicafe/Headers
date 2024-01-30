@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AMSThreadSafeSet : NSObject

@property (retain, nonatomic) NSMutableSet *backingSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingSetAccessQueue;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;

@end
