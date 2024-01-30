@class NSArray, AVCaptureOutputInternal;

@interface AVCaptureOutput : NSObject {
    AVCaptureOutputInternal *_outputInternal;
}

@property (readonly, nonatomic) NSArray *connections;

+ (void)initialize;
+ (long long)dataDroppedReasonFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)supportedProResCodecTypes;
+ (id)availableVideoCodecTypesForSourceDevice:(id)a0 sourceFormat:(id)a1 outputDimensions:(struct { int x0; int x1; })a2 fileType:(id)a3 videoCodecTypesWhiteList:(id)a4;
+ (id)allOutputSubclasses;

- (void)bumpChangeSeed;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)connectionMediaTypes;
- (void)removeConnection:(id)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (id)session;
- (int)changeSeed;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)a0;
- (void)setSinkID:(id)a0;
- (id)sinkID;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setSession:(id)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleCenterStageActiveChangedForDevice:(id)a0;
- (id)connectionWithMediaType:(id)a0;
- (void)handleBackgroundBlurActiveChangedForDevice:(id)a0;
- (void)dealloc;
- (id)initSubclass;
- (void)updateMetadataTransformForSourceFormat:(id)a0;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)a0;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)a0;
- (BOOL)hasRequiredOutputFormatForConnection:(id)a0;
- (id)_inputForConnection:(id)a0;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (id)_recommendedVideoOutputSettingsForConnection:(id)a0 sourceSettings:(id)a1 videoCodec:(id)a2 isIris:(BOOL)a3;
- (id)_recommendedAudioOutputSettingsForConnection:(id)a0 sourceSettings:(id)a1 fileType:(id)a2;
- (void)performBlockOnSessionNotifyingThread:(id /* block */)a0;
- (void)handleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (unsigned int)requiredOutputFormatForConnection:(id)a0;
- (id)transformedMetadataObjectForMetadataObject:(id)a0 connection:(id)a1;
- (id)firstEnabledConnectionForMediaType:(id)a0;
- (id)liveConnections;
- (id)recommendedOutputSettingsForConnection:(id)a0 sourceSettings:(id)a1 videoCodecType:(id)a2 fileType:(id)a3 isIris:(BOOL)a4;
- (BOOL)updateVideoSettingsForConnection:(id)a0;

@end
