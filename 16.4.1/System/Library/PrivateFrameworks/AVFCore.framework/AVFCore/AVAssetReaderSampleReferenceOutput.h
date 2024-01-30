@class AVAssetTrack, AVAssetReaderSampleReferenceOutputInternal;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack *track;

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)a0;

- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)mediaType;
- (void)dealloc;
- (id)_asset;
- (id)init;
- (id)description;
- (BOOL)_trimsSampleDurations;
- (id)initWithTrack:(id)a0;

@end
