@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLCommandQueueDescriptorInternal : MTLCommandQueueDescriptor {
    unsigned long long _maxCommandBufferCount;
    unsigned long long _qosLevel;
    NSObject<OS_dispatch_queue> *_commitQueue;
    BOOL _commitSynchronously;
    NSObject<OS_dispatch_queue> *_completionQueue;
    BOOL _disableCrossQueueHazardTracking;
    unsigned long long _devicePartition;
}

@property BOOL isOpenGLQueue;

- (id)completionQueue;
- (BOOL)disableCrossQueueHazardTracking;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)qosLevel;
- (id)commitQueue;
- (void)setCompletionQueue:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (BOOL)commitSynchronously;
- (id)init;
- (unsigned long long)devicePartition;
- (void)setCommitQueue:(id)a0;
- (void)setCommitSynchronously:(BOOL)a0;
- (void)setDisableCrossQueueHazardTracking:(BOOL)a0;
- (id)description;
- (void)setDevicePartition:(unsigned long long)a0;
- (void)setMaxCommandBufferCount:(unsigned long long)a0;
- (void)setQosLevel:(unsigned long long)a0;

@end
