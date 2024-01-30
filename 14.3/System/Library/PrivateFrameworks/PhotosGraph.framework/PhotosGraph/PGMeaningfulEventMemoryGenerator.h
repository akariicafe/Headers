@class NSString, NSDate;

@interface PGMeaningfulEventMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDate *lowerBoundLocalDate;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long meaning;
@property (retain, nonatomic) NSString *meaningfulEventUUID;
@property (nonatomic) BOOL skipsCollectionTitle;
@property (nonatomic) unsigned long long memoryCategory;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)a0;
- (unsigned long long)durationForCuration;
- (void)_postProcessMemory:(id)a0 withPotentialMemory:(id)a1;
- (id)_potentialMemoriesForDryTesting;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)a0;

@end
