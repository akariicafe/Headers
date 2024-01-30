@class BWFigVideoCaptureDevice, BWStats, CAContext, NSObject, NSMutableArray;
@protocol OS_os_transaction, BWImageQueueSinkNodePreviewTapDelegate, OS_dispatch_queue;

@interface BWImageQueueSinkNode : BWSinkNode {
    unsigned int _imageQueueCapacity;
    unsigned int _imageQueueWidth;
    unsigned int _imageQueueHeight;
    unsigned int _imageQueueRequiredFreeSlots;
    struct _CAImageQueue { } *_imageQueue;
    unsigned int _imageQueueSlot;
    unsigned long long _imageQueueCurrentFreeSlots;
    int _syncStrategy;
    BOOL _resetPreviewSynchronizerOnNextFrame;
    struct OpaqueBWPreviewSynchronizer { } *_previewSynchronizer;
    double _lastDisplaySamplingTime;
    double _lastDisplayVSyncInterval;
    double _lastHarmonicFractionalVSyncInterval;
    double _lastFramePTS;
    double _lastDisplayTime;
    double _lateFrameIntervalStartPTS;
    double _previousFrameDuration;
    unsigned long long _framesSinceLastHarmonicCompensation;
    BOOL _CAVSyncIntervalWorkaroundEnabled;
    BOOL _highLatencyJitterHandlingEnabled;
    BOOL _fasterLatencyRecoveryEnabled;
    BOOL _driftCompensationTimestampFilteringEnabled;
    unsigned long long _numFramesReceived;
    NSObject<OS_os_transaction> *_holdingBuffersForClientAssertion;
    NSMutableArray *_sharedSurfaces;
    unsigned long long *_sharedBufferIDs;
    unsigned long long _sharedSurfaceCount;
    BOOL _useGlobalIOSurfaces;
    struct OpaqueFigSimpleMutex { } *_surfaceRegistrationMutex;
    NSMutableArray *_bufferIDsInQueue;
    struct _EnqueuedBufferContext **_enqueuedBufferContexts;
    unsigned long long _enqueuedBufferContextCount;
    NSMutableArray *_previewPTSHistory;
    struct OpaqueFigSimpleMutex { } *_previewPTSHistoryMutex;
    NSObject<OS_dispatch_queue> *_previewPTSHistoryQueue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstFramePTS;
    long long _firstFrameHostTime;
    BOOL _didCallFirstFrameAtHostTimeCallback;
    BOOL _didCallFirstFrameCallback;
    BOOL _fenceSupportEnabled;
    BOOL _fencePortGenerationIDWillChange;
    int _framesSinceLastFenceIDWillChange;
    int _framesSinceLastFence;
    long long _lastFencedGenerationID;
    int _savedSyncStrategy;
    CAContext *_imageQueueContext;
    int _maxLossyCompressionLevel;
    BWStats *_frameDisplayLatencyStats;
}

@property (readonly, nonatomic) struct _CAImageQueue { } *imageQueue;
@property (readonly, nonatomic) unsigned int imageQueueSlot;
@property (nonatomic) id<BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;
@property (retain, nonatomic) BWFigVideoCaptureDevice *captureDevice;

+ (void)initialize;

- (BOOL)hasNonLiveConfigurationChanges;
- (int)syncStrategy;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)makeCurrentConfigurationLive;
- (id)initWithHFRSupport:(BOOL)a0 ispJitterCompensationEnabled:(BOOL)a1 sinkID:(id)a2;
- (void)fencePortGenerationIDWillChange;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })previewPTSAtHostTime:(unsigned long long)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)inputConnectionWillBeEnabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })previewPTSDisplayedAtHostTime:(unsigned long long)a0 allowingExtrapolation:(BOOL)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)fenceSupportEnabled;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setMaxLossyCompressionLevel:(int)a0;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)setSyncStrategy:(int)a0;
- (void)setFenceSupportEnabled:(BOOL)a0;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (void)dealloc;
- (int)maxLossyCompressionLevel;

@end
