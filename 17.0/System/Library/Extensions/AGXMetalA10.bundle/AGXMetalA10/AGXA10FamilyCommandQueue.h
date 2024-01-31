@class NSString, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLFence;

@interface AGXA10FamilyCommandQueue : IOGPUMetalCommandQueue <MTLCommandQueueSPI> {
    unsigned int _telemetryInternalClientMask;
    struct { int numFrames; void *callstack[64]; } _commandQueueBTInfo;
    BOOL _hasLoggedBacktraceTelemetry;
    int _currentPriority;
    id<MTLFence> _encoderRestartSyncFence;
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

- (void)dealloc;
- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (int)requestCounters:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (id)commandBufferWithDescriptor:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (id)availableCounters;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)counterInfo;
- (id)getRequestedCounters;
- (id)subdivideCounterList:(id)a0;
- (unsigned long long)resolveAndUpdateQueuePriority:(unsigned long long)a0;
- (void)setCommandQueueConfig:(unsigned int)a0 crossQueueHazardTracking:(BOOL)a1 disableIOFencing:(BOOL)a2 enableLowLatencySignalSharedEvent:(BOOL)a3 enableLowLatencyWaitSharedEvent:(BOOL)a4;

@end
