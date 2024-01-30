@class NSString;

@interface PGPlaceLocationMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) NSString *city;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithCityNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;

@end
