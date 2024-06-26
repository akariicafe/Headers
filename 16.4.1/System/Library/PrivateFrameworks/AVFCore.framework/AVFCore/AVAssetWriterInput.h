@class AVAssetWriterInputInternal, NSString, NSDictionary, AVAssetWriterInputHelper, AVWeakReference, AVOutputSettings, NSArray;

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {
    AVAssetWriterInputInternal *_internal;
}

@property (readonly) long long numberOfAppendFailures;
@property (readonly, getter=_markAsFinishedCalled) BOOL markAsFinishedCalled;
@property (retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;
@property (copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic, getter=_pixelBufferPool) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (readonly, nonatomic, getter=_outputSettingsObject) AVOutputSettings *outputSettingsObject;
@property (readonly, nonatomic, getter=_status) long long status;
@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;
@property (nonatomic, getter=_alternateGroupID, setter=_setAlternateGroupID:) short alternateGroupID;
@property (nonatomic, getter=_provisionalAlternateGroupID, setter=_setProvisionalAlternateGroupID:) short provisionalAlternateGroupID;
@property (readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription { } *sourceFormatHint;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)assetWriterInputWithMediaType:(id)a0 outputSettings:(id)a1;
+ (id)assetWriterInputWithMediaType:(id)a0 outputSettings:(id)a1 sourceFormatHint:(struct opaqueCMFormatDescription { } *)a2;

- (void)markAsFinished;
- (void)stopRequestingMediaData;
- (void)markCurrentPassAsFinished;
- (BOOL)canPerformMultiplePasses;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)setPreferredMediaChunkDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)a0 type:(id)a1;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)a0;
- (id)currentPassDescription;
- (void)setMaximizePowerEfficiency:(BOOL)a0;
- (void)setLayer:(long long)a0;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredVolume:(float)a0;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)a0;
- (void)setMediaTimeScale:(int)a0;
- (id)extendedLanguageTag;
- (int)mediaTimeScale;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)languageCode;
- (void)_setAttachedAdaptor:(id)a0;
- (long long)preferredMediaChunkAlignment;
- (void)setExtendedLanguageTag:(id)a0;
- (id)initWithMediaType:(id)a0 outputSettings:(id)a1;
- (void)respondToEachPassDescriptionOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (long long)_appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)availableTrackAssociationTypes;
- (void)setMediaDataLocation:(id)a0;
- (void)setLanguageCode:(id)a0;
- (BOOL)writesMediaDataToBeginningOfFile;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 mediaFileType:(id)a1 error:(id *)a2;
- (BOOL)maximizePowerEfficiency;
- (id)associatedInputsWithTrackAssociationType:(id)a0;
- (void)_transitionToTerminalStatus:(long long)a0;
- (void)setPreferredMediaChunkAlignment:(long long)a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setSampleReferenceBaseURL:(id)a0;
- (void)_didStartInitialSession;
- (BOOL)_prepareToFinishWritingReturningError:(id *)a0;
- (void)addTrackAssociationWithTrackOfInput:(id)a0 type:(id)a1;
- (void)dealloc;
- (void)setPreferredMediaChunkSize:(long long)a0;
- (long long)layer;
- (void)setWritesMediaDataToBeginningOfFile:(BOOL)a0;
- (int)outputTrackID;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (float)preferredVolume;
- (long long)preferredMediaChunkSize;
- (void)_prepareToEndSession;
- (id)_attachedAdaptor;
- (id)init;
- (id)mediaDataLocation;
- (id)initWithMediaType:(id)a0 outputSettings:(id)a1 sourceFormatHint:(struct opaqueCMFormatDescription { } *)a2;
- (void)setMarksOutputTrackAsEnabled:(BOOL)a0;
- (BOOL)performsMultiPassEncodingIfSupported;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preferredMediaChunkDuration;
- (id)sampleReferenceBaseURL;
- (BOOL)marksOutputTrackAsEnabled;

@end
