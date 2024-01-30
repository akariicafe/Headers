@class NSDictionary, NSArray, AVCaptureStillImageOutputInternal;

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal *_internal;
}

@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) NSArray *availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray *availableImageDataCodecTypes;
@property (readonly, nonatomic, getter=isStillImageStabilizationSupported) BOOL stillImageStabilizationSupported;
@property (nonatomic) BOOL automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic, getter=isStillImageStabilizationActive) BOOL stillImageStabilizationActive;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) BOOL highResolutionStillImageOutputEnabled;
@property (readonly, getter=isCapturingStillImage) BOOL capturingStillImage;

+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface { } *)a0 size:(unsigned long long)a1 metadata:(id)a2;
+ (struct __CFDictionary { } *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)new;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { } *)a0;

- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)removeConnection:(id)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)connectionMediaTypes;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)setSquareCropEnabled:(BOOL)a0;
- (void)setShutterSound:(unsigned int)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isLensStabilizationDuringBracketedCaptureSupported;
- (struct CGSize { double x0; double x1; })previewImageSize;
- (unsigned int)imageDataFormatType;
- (void)updateSISSupportedForSourceDevice:(id)a0;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)a0;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)a0;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)a0;
- (void)clearPreparedBracketIfNeeded;
- (BOOL)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
- (void)captureStillImageAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)setNoiseReductionEnabled:(BOOL)a0;
- (id)_figCaptureStillImageSettingsForConnection:(id)a0;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (BOOL)_bracketedSettingsAreValid:(id)a0 fromConnection:(id)a1 exceptionReason:(id *)a2;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)a0 fromConnection:(id)a1;
- (BOOL)_preparedForBracketedCaptureWithSettings:(id)a0;
- (BOOL)isLensStabilizationDuringBracketedCaptureEnabled;
- (void)handleNotificationForRequest:(id)a0 withPayload:(id)a1 imageIsEV0:(BOOL *)a2;
- (void)setPreviewImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)handleNotificationForPrepareRequest:(id)a0 withPayload:(id)a1;
- (BOOL)isNoiseReductionEnabled;
- (id)firstActiveConnection;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(BOOL)a0;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)a0 withSettingsArray:(id)a1 completionHandler:(id /* block */)a2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)a0 withSettingsArray:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (BOOL)squareCropEnabled;
- (unsigned int)shutterSound;

@end
