@class PHAsset;

@interface PGLandscapeWallpaperSuggestionCandidate : NSObject

@property (readonly) PHAsset *asset;
@property (readonly) double cropScore;
@property (readonly) BOOL passesClockOverlap;
@property (readonly) double cropZoomRatio;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;

@end
