@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (nonatomic) unsigned long long qosLevel;
@property (nonatomic) NSObject<OS_dispatch_queue> *commitQueue;
@property (nonatomic) BOOL commitSynchronously;
@property (nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) BOOL disableCrossQueueHazardTracking;
@property (nonatomic) BOOL disableAsyncCompletionDispatch;
@property (nonatomic) unsigned long long devicePartition;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)commandQueueDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
