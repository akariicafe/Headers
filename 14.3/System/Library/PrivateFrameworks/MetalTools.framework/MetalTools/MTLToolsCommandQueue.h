@class NSString, MTLToolsPerfCounterMailbox, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {
    MTLToolsPerfCounterMailbox *_perfSampleMailbox;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _perfHandlerLock;
    id /* block */ _perfSampleHandlerBlock;
}

@property int backgroundTrackingPID;
@property (readonly) unsigned long long maxCommandBufferCount;
@property (readonly) unsigned long long qosLevel;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property BOOL skipRender;
@property BOOL executionEnabled;
@property (readonly) BOOL isOpenGLQueue;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled;
@property (nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property (nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCompletionQueue:(id)a0;
- (void)finish;
- (void)insertDebugCaptureBoundary;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (void)addPerfSampleHandler:(id /* block */)a0;
- (int)requestCounters:(id)a0 withIndex:(unsigned long long)a1;
- (id)commandBufferWithUnretainedReferences;
- (unsigned long long)getGPUPriority;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (id)commandBufferWithDescriptor:(id)a0;
- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)commandBuffer;
- (id)availableCounters;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (id)getSPIStats;
- (id)getRequestedCounters;
- (id)subdivideCounterList:(id)a0;
- (id)counterInfo;
- (void)setSubmissionQueue:(id)a0;
- (unsigned long long)getBackgroundGPUPriority;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (int)requestCounters:(id)a0;
- (id /* block */)snapshotPerfSampleHandlerAndStatEnabled:(BOOL *)a0 forCommandBuffer:(id)a1;

@end
