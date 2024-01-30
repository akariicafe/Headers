@class NSString, AVAssetTrack, NSDictionary, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (readonly, nonatomic) AVAssetTrack *track;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderTrackOutputWithTrack:(id)a0 outputSettings:(id)a1;

- (id)_asset;
- (id)mediaType;
- (id)init;
- (id)_attachedAdaptor;
- (void)dealloc;
- (BOOL)_trimsSampleDurations;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)_figAssetReaderExtractionOptions;
- (id)initWithTrack:(id)a0 outputSettings:(id)a1;
- (id)_formatDescriptions;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (id)description;
- (void)setAppliesPreferredTrackTransform:(BOOL)a0;
- (void)_setAttachedAdaptor:(id)a0;
- (BOOL)appliesPreferredTrackTransform;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferForAdaptor;

@end
