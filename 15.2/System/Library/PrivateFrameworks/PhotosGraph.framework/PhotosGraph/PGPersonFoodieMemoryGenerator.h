@interface PGPersonFoodieMemoryGenerator : PGFoodieMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}

- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;

@end
