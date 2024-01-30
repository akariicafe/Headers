@class PFStoryAutoEditFrequencyTable, PFStoryAutoEditConfiguration;
@protocol PFRandomNumberGenerator;

@interface PXStoryRecipeClipMotionStyleProvider : NSObject {
    PFStoryAutoEditFrequencyTable *_frequencyTable;
    PFStoryAutoEditFrequencyTable *_diptychFrequencyTable;
    PFStoryAutoEditFrequencyTable *_triptychFrequencyTable;
    id<PFRandomNumberGenerator> _randomNumberGenerator;
}

@property (readonly, nonatomic) PFStoryAutoEditConfiguration *configuration;

- (id)init;
- (void).cxx_destruct;
- (struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })_nextMotionInfoForDisplayAssetCount:(long long)a0 excluding:(id)a1;
- (long long)_nextMotionStyleForDisplayAssetCount:(long long)a0 excluding:(id)a1;
- (id)initWithConfiguration:(id)a0 colorGradeCategory:(id)a1 songPace:(long long)a2 randomNumberGenerator:(id)a3;
- (struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })nextMotionInfoForDisplayAssetCount:(long long)a0;
- (struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })nextMotionInfoForModuleExcludingMomentMotion:(long long)a0 previousModuleMotion:(long long)a1;
- (void)provideMotionStylesForMomentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withClipCatalog:(id)a1 usingBlock:(id /* block */)a2;

@end
