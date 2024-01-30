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

- (id)_asset;
- (id)mediaType;
- (id)init;
- (void)dealloc;
- (id)_errorForOSStatus:(int)a0;
- (BOOL)_prepareForReadingReturningError:(id *)a0;
- (BOOL)alwaysCopiesSampleData;
- (BOOL)_enableTrackExtractionReturningError:(id *)a0;
- (id)_formatDescriptions;
- (void)_setVideoComposition:(id)a0;
- (id)initWithVideoTracks:(id)a0 videoSettings:(id)a1;
- (id)_videoCompositionProcessorColorProperties;
- (id)description;
- (void)_setVideoComposition:(id)a0 customVideoCompositorSession:(id)a1;

@end
