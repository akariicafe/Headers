@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)a0;

- (id)mediaType;
- (id)description;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)init;
- (BOOL)_trimsSampleDurations;
- (id)initWithTrack:(id)a0;
- (void)dealloc;
- (id)_asset;

@end
