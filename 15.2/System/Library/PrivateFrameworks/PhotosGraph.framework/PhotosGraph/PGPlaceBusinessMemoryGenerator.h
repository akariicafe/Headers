@class NSString;

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) NSString *business;
@property (nonatomic) long long year;

- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1 andGraph:(id)a2;
- (id)_potentialMemoriesForDryTesting;
- (void)_potentialMemoriesWithBusinessNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;

@end
