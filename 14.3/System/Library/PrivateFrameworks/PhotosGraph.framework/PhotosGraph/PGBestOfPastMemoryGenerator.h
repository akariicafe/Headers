@class NSDate;

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator

@property (nonatomic) NSDate *localStartDate;
@property (nonatomic) NSDate *localEndDate;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)keyAssetCurationOptions;

@end
