@class NSDictionary, BWLimitedGMErrorLogger, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BWVideoCompressorNode : BWNode {
    NSDictionary *_compressionSettings;
    NSDictionary *_compressionSettingsPreparedFor;
    BOOL _nextFrameEncodeAsKeyFrame;
    BOOL _prioritizeEncodingSpeedOverQuality;
    int _pipelineTraceID;
    struct OpaqueVTCompressionSession { } *_compressionSession;
    BOOL _didPrepareToEncode;
    BOOL _sourceIsHDResolution;
    unsigned int _sourcePixelFormatType;
    NSObject<OS_dispatch_queue> *_emitterQueue;
    NSObject<OS_dispatch_queue> *_compressionSessionStateQueue;
    NSObject<OS_dispatch_source> *_reapCompressionSessionTimer;
    double _reapCompressionSessionTimerDurationInSeconds;
    BOOL _compressionSessionReuseEnabled;
    BOOL _compressionSessionCanBeReused;
    BOOL _resetCodec;
    BOOL _emittedFirstVideoBuffer;
    NSObject<OS_dispatch_queue> *_thermalAndPowerNotificationQueue;
    double _bFrameEncodingAllowedAtHigherPressureTimeLimit;
    double _bFrameEncodingAllowedAtHigherPressureStopTime;
    int _nonBFrameAverageBitRate;
    int _thermalPressureNotificationToken;
    int _thermalPressureLevel;
    int _powerPressureNotificationToken;
    int _powerPressureLevel;
    BOOL _bFrameEncodingRequested;
    BOOL _bFrameEncodingAllowed;
    BOOL _propagateStabilizedFacesToAVE;
    BOOL _overCaptureEnabled;
    BOOL _shouldAttachDebugSEI;
    BOOL _shouldPassSerializedDepthImageBuffers;
    BOOL _flushRequestReceived;
    float _maxVideoFrameRate;
    BOOL _attachThumbnailSourcePixelBuffer;
    struct __CVBuffer { } *_thumbnailSourcePixelBuffer;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
    BOOL _delayedCompressorCleanupEnabled;
}

+ (void)initialize;
+ (id)_formatRequirementsForCompressionSettings:(id)a0 maxVideoFrameRate:(float)a1 retainedBufferCountHint:(int *)a2;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)makeCurrentConfigurationLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)insertKeyFrame;
- (void)dealloc;
- (int)_setEncoderCompressionPropertiesWithCompressionSession:(struct OpaqueVTCompressionSession { } *)a0 compressionProperties:(id)a1 sourcePixelType:(unsigned int)a2 isHDResolution:(unsigned char)a3;
- (void)setPrioritizeEncodingSpeedOverQuality:(BOOL)a0;
- (void)_registerForThermalAndPowerNotifications;
- (void)_updateThermalPressureLevel;
- (void)_releaseCompressionSession;
- (void)setPipelineTraceID:(int)a0;
- (void)_createCompressionSession;
- (BOOL)prioritizeEncodingSpeedOverQuality;
- (struct OpaqueVTCompressionSession { } *)_createEncoderSessionWithWidth:(int)a0 height:(int)a1 inputPixelFormat:(unsigned int)a2 isHDResolution:(unsigned char)a3 videoCodec:(unsigned int)a4 encoderSpecification:(id)a5 compressionProperties:(id)a6 compressorNodeRef:(void *)a7;
- (void)_validateBFrameEncodingAbility;
- (void)setReapCompressionSessionTimerDurationInSeconds:(double)a0;
- (id)initWithCompressionSettings:(id)a0 overCaptureEnabled:(BOOL)a1 maxVideoFrameRate:(float)a2 delayedCompressorCleanupEnabled:(BOOL)a3;
- (struct OpaqueVTCompressionSession { } *)_compresessionSession;
- (void)_prepareForVideoCompression;
- (void)_updatePowerPressureLevel;
- (id)_HDRImageStatisticsDictFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 metadata:(id)a1;
- (int)pipelineTraceID;
- (void)_cleanCompressor:(BOOL)a0;

@end
