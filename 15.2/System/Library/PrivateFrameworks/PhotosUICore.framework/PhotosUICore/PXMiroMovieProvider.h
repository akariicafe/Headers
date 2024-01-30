@class MiroMovie, NSSet;

@interface PXMiroMovieProvider : PXMovieProvider

@property (retain, nonatomic, setter=_setMiroMovie:) MiroMovie *_miroMovie;
@property (readonly, nonatomic) NSSet *defaultAssets;

+ (void)initialize;
+ (void *)_loadMiroFrameworkIfNeeded;
+ (void)preloadMiroFrameworkIfNeeded;

- (void).cxx_destruct;
- (BOOL)canPlayMovie;
- (id)movieViewController;
- (id)diagnosticsItemProvider;
- (BOOL)ppt_runTest:(id)a0 options:(id)a1;
- (Class)_miroMovieClass;
- (id)miroMovie:(id)a0 createAndNavigateToMemoryFromCollection:(id)a1;
- (void)_navigateToMemory:(id)a0;

@end
