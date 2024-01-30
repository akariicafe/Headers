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

- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)mediaType;
- (void)dealloc;
- (id)_asset;
- (id)init;
- (id)description;
- (id)_errorForOSStatus:(int)a0;
- (id)_formatDescriptions;
- (BOOL)_prepareForReadingReturningError:(id *)a0;
- (void)_setVideoComposition:(id)a0;
- (void)_setVideoComposition:(id)a0 customVideoCompositorSession:(id)a1;
- (id)_videoCompositionProcessorColorProperties;
- (BOOL)alwaysCopiesSampleData;
- (id)initWithVideoTracks:(id)a0 videoSettings:(id)a1;
- (id)sampleDataTrackIDs;

@end
