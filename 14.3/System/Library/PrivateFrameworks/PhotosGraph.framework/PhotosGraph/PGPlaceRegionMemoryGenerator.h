@class NSString;

@interface PGPlaceRegionMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) NSString *region;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithRegionNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;

@end
