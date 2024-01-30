@class NSString, NSArray, NSDictionary;

@interface PGMeaningActionCriteria : NSObject <PGMeaningCriteria>

@property (retain, nonatomic) NSString *actionName;
@property (nonatomic) long long actionValue;
@property (retain, nonatomic) NSArray *descendingSortedMediaAnalysisVersion;
@property (retain, nonatomic) NSDictionary *highPrecisionThresholdByMediaAnalysisVersion;
@property (retain, nonatomic) NSDictionary *highRecallThresholdByMediaAnalysisVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)actionHighRecallThresholdForAssetMediaAnalysisVersion:(unsigned long long)a0 usingActionCriteriaByValidPersonActivityMeaningLabel:(id)a1 andValidPersonActivity:(id)a2;
+ (id)actionValueStringUsingActionCriteriaByValidPersonActivityMeaningLabel:(id)a0 withPersonActivityMeaningLabel:(id)a1;
+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;
+ (id)descendingSortedMediaAnalysisVersionFromCriteriaDictionary:(id)a0 usingActionThresholdKey:(id)a1;
+ (id)parseThresholdFromCriteriaDictionary:(id)a0 usingActionThresholdKey:(id)a1;

- (BOOL)isValid;
- (void).cxx_destruct;
- (double)actionThresholdForAssetMediaAnalysisVersion:(unsigned long long)a0 withActionThresholdByMediaAnalysisVersion:(id)a1;
- (BOOL)passesCriteriaWithTrait:(id)a0 withHighPrecisionThreshold:(double)a1;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;

@end
