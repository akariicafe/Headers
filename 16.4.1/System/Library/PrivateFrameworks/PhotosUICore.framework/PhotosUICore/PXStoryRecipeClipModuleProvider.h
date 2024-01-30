@class PFStoryAutoEditConfiguration;

@interface PXStoryRecipeClipModuleProvider : NSObject

@property (readonly, nonatomic) PFStoryAutoEditConfiguration *configuration;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_splitEmptySpaceInModules:(id)a0 maxEmptySpaceLength:(unsigned long long)a1 momentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 withClipCatalog:(id)a3;
- (id)computeRunsForModuleType:(long long)a0 momentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withClipCatalog:(id)a2 maxModuleLength:(unsigned long long)a3;
- (id)mergeModulesFromRangesByModuleType:(id)a0 momentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)provideModulesForMomentClipRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withClipCatalog:(id)a1 maxModuleLength:(unsigned long long)a2 maxEmptySpaceLength:(unsigned long long)a3 usingBlock:(id /* block */)a4;
- (id)splitRanges:(id)a0 maxLength:(unsigned long long)a1;

@end
