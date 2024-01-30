@class NSDictionary;
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
}

@property (nonatomic) id<BWRemoteQueueSinkNodeDelegate> delegate;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setVideoColorInfoOverride:(id)a0;
- (BOOL)panoramaRequiresLTMLocking;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (BOOL)cameraSupportsFlash;
- (id)nodeSubType;
- (BOOL)attachPanoramaMetadata;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)registerSurfacesFromSourcePool:(id)a0;
- (int)clientVideoRetainedBufferCount;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (BOOL)discardsLateSampleBuffers;
- (id)videoColorInfoOverride;
- (BOOL)removeCameraIntrinsicMatrixAttachment;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)a0;
- (void)setDiscardsLateSampleBuffers:(BOOL)a0;
- (void)setPanoramaRequiresLTMLocking:(BOOL)a0;
- (void)_handlePeerTerminated;
- (void)setClientVideoRetainedBufferCount:(int)a0;
- (BOOL)_includeDiagnosticMetadataIfDevicePropertiesLockedForPanorama:(struct opaqueCMSampleBuffer { } *)a0 panoramaRequiresLTMLocking:(BOOL)a1;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)setAttachPanoramaMetadata:(BOOL)a0;
- (BOOL)pixelBufferAttachmentModificationAllowed;
- (int)_finishRenderingSampleBufferUsingTheLocalQueue:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setPixelBufferAttachmentModificationAllowed:(BOOL)a0;
- (id)initWithMediaType:(unsigned int)a0 clientAuditToken:(struct { unsigned int x0[8]; })a1 sinkID:(id)a2;
- (int)_finishRenderingSampleBufferUsingTheRemoteCaptureStack:(struct opaqueCMSampleBuffer { } *)a0 isDroppedSample:(BOOL)a1;

@end
