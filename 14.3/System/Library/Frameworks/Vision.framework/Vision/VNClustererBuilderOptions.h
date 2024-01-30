@interface VNClustererBuilderOptions : VNClustererOptions

@property (nonatomic) float ageClassifierBabyThreshold;
@property (nonatomic) float ageClassifierKidThreshold;

+ (BOOL)_defaultAgeClassifierKidThreshold:(float *)a0 forFaceprintRequestRevision:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)_defaultAgeClassifierBabyThreshold:(float *)a0 forFaceprintRequestRevision:(unsigned long long)a1 error:(id *)a2;

- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 requestRevision:(unsigned long long)a4;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 torsoThreshold:(float)a4 requestRevision:(unsigned long long)a5;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3;
- (id)initWithType:(id)a0 cachePath:(id)a1 state:(id)a2 threshold:(float)a3 torsoThreshold:(float)a4;

@end
