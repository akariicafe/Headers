@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;

- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)a0 type:(id)a1;
- (void)setExtendedLanguageTag:(id)a0;
- (void)setExpectsMediaDataInRealTime:(BOOL)a0;
- (void)setSampleReferenceBaseURL:(id)a0;
- (void)setLayer:(long long)a0;
- (void)setMaximizePowerEfficiency:(BOOL)a0;
- (void)setMediaTimeScale:(int)a0;
- (BOOL)canPerformMultiplePasses;
- (void)setPreferredMediaChunkAlignment:(long long)a0;
- (void)setMarksOutputTrackAsEnabled:(BOOL)a0;
- (void)addTrackAssociationWithTrackOfInput:(id)a0 type:(id)a1;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredVolume:(float)a0;
- (void)setAlternateGroupID:(short)a0;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)a0;
- (long long)status;
- (void)setMetadata:(id)a0;
- (void)setProvisionalAlternateGroupID:(short)a0;
- (void)setLanguageCode:(id)a0;
- (void)setMediaDataLocation:(id)a0;
- (void)setPreferredMediaChunkSize:(long long)a0;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)a0;
- (void)setPreferredMediaChunkDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithConfigurationState:(id)a0;
- (BOOL)_canAddTrackAssociationWithTrackOfInput:(id)a0 type:(id)a1 exceptionReason:(id *)a2;
- (id)initWithMediaType:(id)a0 outputSettings:(id)a1 sourceFormatHint:(struct opaqueCMFormatDescription { } *)a2;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setSourcePixelBufferAttributes:(id)a0;
- (BOOL)_validateLanguageCode:(id)a0;

@end
