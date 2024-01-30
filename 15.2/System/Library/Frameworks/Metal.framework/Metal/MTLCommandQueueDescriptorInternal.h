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

- (unsigned long long)maxCommandBufferCount;
- (BOOL)commitSynchronously;
- (void)setCompletionQueue:(id)a0;
- (id)completionQueue;
- (unsigned long long)qosLevel;
- (id)commitQueue;
- (void)setDevicePartition:(unsigned long long)a0;
- (BOOL)disableCrossQueueHazardTracking;
- (unsigned long long)devicePartition;
- (id)description;
- (id)init;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setQosLevel:(unsigned long long)a0;
- (void)setMaxCommandBufferCount:(unsigned long long)a0;
- (void)setDisableCrossQueueHazardTracking:(BOOL)a0;
- (void)setCommitQueue:(id)a0;
- (void)setCommitSynchronously:(BOOL)a0;

@end
