@class NSArray, NSNumber;

@interface SGMISaliencyModelConfig : NSObject

@property (readonly) NSArray *saliencyOverrideRules;
@property (readonly) NSArray *featureNames;
@property (readonly) NSArray *mean;
@property (readonly) NSArray *std;
@property (readonly) NSArray *groundTruthEstimatorRules;
@property (readonly) NSArray *groundTruthEstimatorFeatures;
@property (readonly) NSNumber *threshold;
@property (readonly, nonatomic) unsigned long long minCountToConsiderATokenAsHighlyDiscriminant;
@property (readonly, nonatomic) double ratioToConsiderATokenAsHighlyDiscriminant;
@property (readonly, nonatomic) unsigned long long minCountToConsiderATokenAsExtremelyDiscriminant;
@property (readonly, nonatomic) double ratioToConsiderATokenAsExtremelyDiscriminant;

+ (id)defaultConfig;
+ (id)groundTruthVersion;
+ (id)inferenceVersion;
+ (id)rulesFromFeatures:(id)a0 lowerBounds:(id)a1 upperBounds:(id)a2 outputs:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSaliencyOverrideRules:(id)a0 featureNames:(id)a1 mean:(id)a2 std:(id)a3 groundTruthEstimatorRules:(id)a4 threshold:(id)a5 minCountToConsiderATokenAsHighlyDiscriminant:(id)a6 ratioToConsiderATokenAsHighlyDiscriminant:(id)a7 minCountToConsiderATokenAsExtremelyDiscriminant:(id)a8 ratioToConsiderATokenAsExtremelyDiscriminant:(id)a9;

@end
