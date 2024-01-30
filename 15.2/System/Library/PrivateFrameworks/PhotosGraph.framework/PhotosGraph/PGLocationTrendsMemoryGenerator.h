@class PGMemoryMomentRequirements;

@interface PGLocationTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    PGMemoryMomentRequirements *_momentRequirements;
}

- (void).cxx_destruct;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)momentRequirements;

@end
