@class NSArray;

@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder

@property (nonatomic) double mindingInterval;
@property (readonly, nonatomic) NSArray *movies;

+ (id)fragmentedMovieMinderWithMovie:(id)a0 mindingInterval:(double)a1;

- (BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)addFragmentedMovie:(id)a0;
- (id)initWithMovie:(id)a0 mindingInterval:(double)a1;
- (void)removeFragmentedMovie:(id)a0;

@end
