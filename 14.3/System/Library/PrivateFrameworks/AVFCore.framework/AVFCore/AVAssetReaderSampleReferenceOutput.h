@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)a0;

- (id)_asset;
- (id)mediaType;
- (id)init;
- (void)dealloc;
- (BOOL)_trimsSampleDurations;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)initWithTrack:(id)a0;
- (id)description;

@end
