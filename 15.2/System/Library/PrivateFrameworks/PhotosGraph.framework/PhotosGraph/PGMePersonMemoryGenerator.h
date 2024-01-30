@class PGFeaturedTimePeriodMemoryConfiguration;

@interface PGMePersonMemoryGenerator : PGPersonMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
}

- (void).cxx_destruct;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredSeasonConfiguration;

@end
