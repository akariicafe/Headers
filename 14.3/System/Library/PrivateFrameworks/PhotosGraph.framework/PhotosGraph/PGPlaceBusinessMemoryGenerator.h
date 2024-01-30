@class NSString;

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) NSString *business;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (void)_potentialMemoriesWithBusinessNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;

@end
