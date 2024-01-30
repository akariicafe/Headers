@class PFStoryAutoEditConfiguration, NSString, NSMutableDictionary, PXStoryMomentRecipeState;

@interface PXStoryMomentRecipeProvider : NSObject {
    NSString *_colorGradeCategory;
    PFStoryAutoEditConfiguration *_configuration;
    long long _songPace;
    PXStoryMomentRecipeState *_state;
    NSMutableDictionary *_clipDebugInfos;
}

- (id)init;
- (void).cxx_destruct;
- (long long)_incomingTransitionKindForRecipe:(unsigned long long)a0;
- (long long)_innerTransitionKindForRecipe:(unsigned long long)a0;
- (BOOL)_isSongEnergetic;
- (long long)_motionStyleForRecipe:(unsigned long long)a0;
- (id)_nextBaseMomentRecipeWithPreviousClip:(id)a0;
- (struct { long long x0; double x1; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; struct { char x0; char x1; } x3; } x2; })_nextEmptySpaceBreakTransitionForMotion:(struct { long long x0; union { struct { unsigned long long x0; unsigned long long x1; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x1; })a0;
- (id)_nextModuleRecipeWithModuleClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 clipCatalog:(id)a1;
- (id)_nextNUpRevealRecipeWithPreviousClip:(id)a0;
- (id)_nextSingleAssetRecipeWithPreviousClip:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfLength:(long long)a0 centeredOnIndex:(long long)a1 withinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_recipeFromRecipeType:(unsigned long long)a0 previousClip:(id)a1;
- (id)initWithConfiguration:(id)a0 colorGradeCategory:(id)a1 songPace:(long long)a2 randomNumberGenerator:(id)a3;
- (void)provideDebugInfoForClip:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)provideRecipeForMomentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withClipCatalog:(id)a1 usingBlock:(id /* block */)a2;

@end
