@class BWSceneStabilityMonitor, NSString, BWVideoDataOutputAnalyticsPayload;
@protocol BWRemoteQueueSinkNodeDelegate;

@interface BWRemoteQueueSinkNode : BWSinkNode {
    BOOL _mediaTypeIsVideo;
    BOOL _mediaTypeIsPointCloud;
    struct remoteQueueSenderOpaque { } *_remoteQueueSender;
    struct OpaqueFigSimpleMutex { } *_peerTerminationMutex;
    struct shmemPoolOpaque { } *_sharedMemoryPool;
    struct __CFAllocator { } *_sharedMemoryPoolCFAllocator;
    struct localQueueOpaque { } *_localQueue;
    unsigned int _numberOfMediaBuffersLocallyEnqueued;
    unsigned int _numberOfMediaBuffersLocallyDequeued;
    int _clientVideoRetainedBufferCount;
    BOOL _discardsLateSampleBuffers;
    BOOL _attachPanoramaMetadata;
    BOOL _sentDiagnosticMetadataForPanorama;
    BOOL _disableFlatDictionaryVDOMetadata;
    struct OpaqueFigFlatDictionaryKeySpec { } *_makerNoteKeySpec;
    BOOL _cameraSupportsFlash;
    BOOL _attachDetectedObjectsInfo;
    BOOL _removeCameraIntrinsicMatrixAttachment;
    struct opaqueCMFormatDescription { } *_cachedFormatDescription;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPTS;
    int _receiverPID;
    BOOL _clientIsRunningInMediaserverd;
    BOOL _panoramaRequiresLTMLocking;
    BWSceneStabilityMonitor *_stabilityMonitor;
    NSString *_clientApplicationID;
    long long _totalNumberOfFrames;
    long long _totalNumberOfFramesDropped;
    long long _totalNumberOfISPFramesDropped;
    BWVideoDataOutputAnalyticsPayload *_analyticsPayload;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstPTS;
    BOOL _proresVideo;
}

@property (nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (BOOL)attachPanoramaMetadata;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)discardsLateSampleBuffers;
- (int)clientVideoRetainedBufferCount;
- (BOOL)sceneStabilityMetadataEnabled;
- (void)dealloc;
- (void)setClientVideoRetainedBufferCount:(int)a0;
- (void)setPanoramaRequiresLTMLocking:(BOOL)a0;
- (void)setDiscardsLateSampleBuffers:(BOOL)a0;
- (void)setSceneStabilityMetadataEnabled:(BOOL)a0;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (BOOL)removeCameraIntrinsicMatrixAttachment;
- (void)setAttachPanoramaMetadata:(BOOL)a0;
- (BOOL)panoramaRequiresLTMLocking;
- (id)initWithMediaType:(unsigned int)a0 clientAuditToken:(struct { unsigned int x0[8]; })a1 sinkID:(id)a2;
- (BOOL)cameraSupportsFlash;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)a0;

@end
