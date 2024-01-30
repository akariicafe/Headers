@class AVAssetReaderVideoCompositionOutputInternal, NSArray, NSDictionary, AVVideoComposition;
@protocol AVVideoCompositing;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

@property (readonly, nonatomic) NSArray *videoTracks;
@property (readonly, nonatomic) NSDictionary *videoSettings;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) id<AVVideoCompositing> customVideoCompositor;

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)a0 videoSettings:(id)a1;

- (id)mediaType;
- (void)_setVideoComposition:(id)a0 customVideoCompositorSession:(id)a1;
- (id)description;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)init;
- (id)_errorForOSStatus:(int)a0;
- (BOOL)_prepareForReadingReturningError:(id *)a0;
- (BOOL)alwaysCopiesSampleData;
- (id)_formatDescriptions;
- (id)sampleDataTrackIDs;
- (id)initWithVideoTracks:(id)a0 videoSettings:(id)a1;
- (void)_setVideoComposition:(id)a0;
- (id)_videoCompositionProcessorColorProperties;
- (void)dealloc;
- (id)_asset;

@end
