@class NSString, AVAssetTrack, NSDictionary, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (readonly, nonatomic) AVAssetTrack *track;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;

+ (id)assetReaderTrackOutputWithTrack:(id)a0 outputSettings:(id)a1;

- (id)_attachedAdaptor;
- (void)setAppliesPreferredTrackTransform:(BOOL)a0;
- (id)mediaType;
- (BOOL)appliesPreferredTrackTransform;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferForAdaptor;
- (id)description;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)init;
- (BOOL)_trimsSampleDurations;
- (id)_figAssetReaderExtractionOptions;
- (id)initWithTrack:(id)a0 outputSettings:(id)a1;
- (id)_formatDescriptions;
- (unsigned int)_getUniformMediaSubtypeIfExists;
- (void)dealloc;
- (id)_asset;
- (void)_setAttachedAdaptor:(id)a0;

@end
