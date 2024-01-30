@class NSString, NSSet;

@interface PGPlaceAreaMemoryGenerator : PGFeaturedMemoryGenerator {
    NSSet *_supersetAddressNodes;
}

@property (nonatomic) NSString *area;
@property (nonatomic) long long year;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithAreaNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;

@end
