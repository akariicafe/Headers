@class BWVideoDataOutputAnalyticsPayload, NSString, NSDictionary, BWSceneStabilityMonitor;
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
    NSDictionary *_videoColorInfoOverride;
    BOOL _pixelBufferAttachmentModificationAllowed;
    BOOL _cameraSupportsFlash;
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
}

@property (nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;

+ (void)initialize;

- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)cameraSupportsFlash;
- (void)setVideoColorInfoOverride:(id)a0;
- (void)setPixelBufferAttachmentModificationAllowed:(BOOL)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)pixelBufferAttachmentModificationAllowed;
- (void)setSceneStabilityMetadataEnabled:(BOOL)a0;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)videoColorInfoOverride;
- (void)setPanoramaRequiresLTMLocking:(BOOL)a0;
- (BOOL)panoramaRequiresLTMLocking;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)a0;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (void)setDiscardsLateSampleBuffers:(BOOL)a0;
- (BOOL)attachPanoramaMetadata;
- (id)initWithMediaType:(unsigned int)a0 clientAuditToken:(struct { unsigned int x0[8]; })a1 sinkID:(id)a2;
- (void)dealloc;
- (BOOL)discardsLateSampleBuffers;
- (void)setAttachPanoramaMetadata:(BOOL)a0;
- (int)clientVideoRetainedBufferCount;
- (BOOL)removeCameraIntrinsicMatrixAttachment;
- (BOOL)sceneStabilityMetadataEnabled;
- (void)setClientVideoRetainedBufferCount:(int)a0;

@end
