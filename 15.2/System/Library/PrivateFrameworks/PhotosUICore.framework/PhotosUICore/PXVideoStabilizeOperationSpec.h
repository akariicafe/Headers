@class PXVideoStabilizationRecipeSource;

@interface PXVideoStabilizeOperationSpec : PXVideoProcessingOperationSpec

@property (retain, nonatomic) PXVideoStabilizationRecipeSource *recipeSource;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } crossfadeDuration;
@property (nonatomic) BOOL performStabilization;
@property (nonatomic) BOOL abortIfStabilizationFails;
@property (nonatomic) BOOL wantsAudio;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
