@interface REUpNextMLModelManager : NSObject

+ (void)removeStoredModel;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)comparatorWithRules:(id)a0;
- (void)performTrainingWithFeatureMaps:(id)a0 events:(id)a1;
- (float)predicitedProbabilityForLogicalElement:(id)a0;

@end
