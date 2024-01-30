@class BWDeferredPipelineParameters, BWDeferredCaptureControllerConfiguration, BWStillImageSettings, BWDeferredCaptureContainer;

@interface BWDeferredCaptureControllerInput : BWStillImageProcessorControllerInput {
    BWDeferredCaptureControllerConfiguration *_configuration;
    BWStillImageSettings *_settings;
    BOOL _proxyBufferReady;
}

@property (readonly, nonatomic) BWDeferredCaptureContainer *captureContainer;
@property (readonly, nonatomic) int compressionProfile;
@property (nonatomic) int processingError;
@property (readonly, nonatomic) BWDeferredPipelineParameters *pipelineParameters;

- (void)dealloc;
- (id)initWithSettings:(id)a0 configuration:(id)a1 sourceNodePixelBufferAttributes:(id)a2;
- (void)_addDictionary:(id)a0 tag:(id)a1;
- (void)_addInference:(id)a0 inferenceAttachmentKey:(id)a1 portType:(id)a2;
- (void)_addInferenceBuffer:(struct __CVBuffer { } *)a0 inferenceAttachedMediaKey:(id)a1 portType:(id)a2;
- (void)addBuffer:(struct __CVBuffer { } *)a0 bufferType:(unsigned long long)a1 captureFrameFlags:(unsigned long long)a2 metadata:(id)a3 rawThumbnailsBuffer:(struct __CVBuffer { } *)a4 rawThumbnailsMetadata:(id)a5 portType:(id)a6;
- (void)addDictionary:(id)a0 tag:(id)a1;
- (void)addPhotoDescriptor:(id)a0;
- (void)encounteredProcessingError:(int)a0;
- (void)proxyBufferReady;

@end
