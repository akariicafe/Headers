@class NSString, NSSet;

@interface PGPeopleMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSString *peopleUUID;
@property (retain, nonatomic) NSSet *personNodes;
@property (retain, nonatomic) NSSet *birthdayPersonUUIDs;
@property (nonatomic) long long year;
@property (nonatomic) NSSet *extraFeatures;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoriesWithPeopleNode:(id)a0 inYear:(long long)a1 result:(id /* block */)a2;
- (BOOL)_upcomingBirthdayWillCollideWithPotentialMemory:(id)a0;

@end
