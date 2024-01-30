@class NSMutableArray, NSString, _MTLDevice, NSObject;
@protocol OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface _MTLCommandQueue : _MTLObjectWithLabel {
    _MTLDevice *_dev;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pendingQueueLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _submittedQueueLock;
    NSObject<OS_dispatch_group> *_submittedGroup;
    NSObject<OS_dispatch_queue> *_commandQueueDispatch;
    NSObject<OS_dispatch_queue> *_completionQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    unsigned long long _labelTraceID;
    _Atomic int _numCommandBuffers;
    id /* block */ _perfSampleHandlerBlock;
    NSObject<OS_dispatch_semaphore> *_presentScheduledSemaphore;
    BOOL _forceImmediateSubmissionOnCommitThread;
}

@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property (readonly) BOOL isOpenGLQueue;
@property int backgroundTrackingPID;
@property (readonly) unsigned long long globalTraceObjectID;
@property BOOL skipRender;
@property BOOL executionEnabled;
@property (copy) NSString *label;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property (nonatomic) unsigned long long numCommandBuffers;
@property (nonatomic, getter=getListIndex) unsigned long long listIndex;

- (unsigned long long)numCommandBuffers;
- (void)finish;
- (void)insertDebugCaptureBoundary;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithDevice:(id)a0;
- (void)commitCommandBuffer:(id)a0 wake:(BOOL)a1;
- (void)addPerfSampleHandler:(id /* block */)a0;
- (void)submitCommandBuffers:(const id *)a0 count:(unsigned long long)a1;
- (int)requestCounters:(id)a0 withIndex:(unsigned long long)a1;
- (void)completeCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (void)enqueueCommandBuffer:(id)a0;
- (id)commandBufferWithDescriptor:(id)a0;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (BOOL)_submitAvailableCommandBuffers;
- (id)availableCounters;
- (id)description;
- (void)setSubmissionQueue:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)initWithDevice:(id)a0 maxCommandBufferCount:(unsigned long long)a1;
- (unsigned long long)getAndIncrementNumCommandBuffers;
- (void)commandBufferDidComplete:(id)a0 startTime:(unsigned long long)a1 completionTime:(unsigned long long)a2 error:(id)a3;
- (BOOL)submitCommandBuffer:(id)a0;
- (int)requestCounters:(id)a0;

@end
