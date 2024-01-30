@class NSArray, PGMeaningCriteriaInfo, NSString, PGMeaningSceneCriteria, PGMeaningActionCriteria;

@interface PGMeaningCriteriaEvaluator : NSObject

@property (retain, nonatomic) PGMeaningCriteriaInfo *meaningCriteriaInfo;
@property (retain, nonatomic) NSArray *allMeaningCriteriaArray;
@property (readonly, nonatomic) NSString *meaningLabel;
@property (retain, nonatomic) PGMeaningSceneCriteria *meaningSceneCriteria;
@property (retain, nonatomic) PGMeaningActionCriteria *meaningActionCriteria;

+ (id)_allMeaningCriteriaClassArray;
+ (id)meaningCriteriaEvaluatorsForMeaningLabel:(id)a0 withDictionary:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)allCriteriaIsValid;
- (BOOL)allCriteriaPassForAssets:(id)a0;
- (BOOL)allCriteriaPassForMomentNode:(id)a0 momentNodeCache:(id)a1;
- (id)initWithDictionary:(id)a0 meaningCriteriaInfo:(id)a1;

@end
