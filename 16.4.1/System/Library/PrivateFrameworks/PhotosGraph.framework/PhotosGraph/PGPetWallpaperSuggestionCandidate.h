@class PHFace, PHAsset;

@interface PGPetWallpaperSuggestionCandidate : NSObject

@property (readonly) PHFace *face;
@property (readonly) PHAsset *asset;
@property (readonly) double cropScore;
@property (readonly) BOOL passesClockOverlap;
@property (readonly) double cropZoomRatio;

- (void).cxx_destruct;
- (id)initWithFace:(id)a0 inAsset:(id)a1;

@end
