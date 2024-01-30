@class AVAsset, VEKProduction, PHImageManager, VEKSuggestion, PHAsset;
@protocol PMClipProviderDelegate, PMRelatedClipsDelegate, VEKClipProtocol;

@interface PMClipProvider : NSObject

@property (retain, nonatomic) id<VEKClipProtocol> clip;
@property (retain, nonatomic) VEKProduction *production;
@property (nonatomic) double projectDuration;
@property (readonly, nonatomic) PHImageManager *imageManager;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) id<VEKClipProtocol> introTransition;
@property (retain, nonatomic) id<VEKClipProtocol> outroTransition;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } trimTimeRange;
@property (weak, nonatomic) id<PMClipProviderDelegate> delegate;
@property (weak, nonatomic) id<PMRelatedClipsDelegate> relatedClipsDelegate;
@property (retain, nonatomic) VEKSuggestion *suggestion;
@property (readonly, nonatomic) PHAsset *phAsset;
@property (readonly, nonatomic) double maxDuration;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) BOOL trimmable;
@property (nonatomic) long long usage;
@property (nonatomic) long long volume;
@property (nonatomic) long long specialTreatment;
@property (nonatomic) double reorderTimeOffset;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } suggestionTrimTimeRange;

+ (id)getThumbnailQueue;

- (void)requestAVAssetWithResultHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)requestPlayerItemWithResultHandler:(id /* block */)a0;
- (void)createSuggestionIfNeeded;
- (BOOL)shouldTrimToProposedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)replaceSuggestionWithSuggestion:(id)a0;
- (void)addSuggestionToProduction;
- (id)suggestionsForAsset:(id)a0;
- (id)createSlomoComposition:(id)a0;
- (id)initWithClip:(id)a0 production:(id)a1 result:(id)a2;
- (BOOL)trimToTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)requestStillImageForSize:(struct CGSize { double x0; double x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withResultHandler:(id /* block */)a2;

@end
