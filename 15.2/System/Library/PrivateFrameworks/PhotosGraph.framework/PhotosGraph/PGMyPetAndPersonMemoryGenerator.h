@class PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGMyPetAndPersonMemoryGenerator : PGMyPetMemoryGenerator {
    BOOL _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}

- (void).cxx_destruct;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredSeasonConfiguration;
- (id)momentRequirements;
- (id)featuredYearConfiguration;
- (BOOL)intersectRelevantAssetsForFeatures;

@end
