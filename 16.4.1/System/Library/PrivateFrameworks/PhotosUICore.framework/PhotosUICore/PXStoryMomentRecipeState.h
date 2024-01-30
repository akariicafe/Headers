@class PFStoryAutoEditFrequencyTable;

@interface PXStoryMomentRecipeState : NSObject {
    unsigned long long _previousPanDirection;
    unsigned long long _previous2UpPanRelativeMotion;
    unsigned long long _previous3UpPanRelativeMotion;
    unsigned long long _previousScaleDirection;
    unsigned long long _previousRotateDirection;
    unsigned long long _previousBaseMomentRecipe;
    unsigned long long _previousPortraitMomentRecipe;
    unsigned long long _previousSingleAssetMomentRecipe;
    long long _previousEmptySpaceStrategy;
    PFStoryAutoEditFrequencyTable *_basicRecipeFrequencyTable;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_nextModuleRecipeWithModuleClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 clipCatalog:(id)a1;
- (id)initWithRandomNumberGenerator:(id)a0;
- (unsigned long long)next2UpPanRelativeMotion;
- (unsigned long long)next3UpPanRelativeMotion;
- (unsigned long long)nextBaseMomentRecipe;
- (long long)nextEmptySpaceStrategy;
- (unsigned long long)nextNUpPanRelativeMotionWithN:(long long)a0;
- (unsigned long long)nextPanDirection;
- (unsigned long long)nextRotateDirection;
- (unsigned long long)nextScaleDirection;
- (unsigned long long)nextSingleAssetMomentRecipe;

@end
