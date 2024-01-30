@class NSArray, PGMeaningCriteriaInfo, NSString;

@interface PGMeaningCriteriaEvaluator : NSObject

@property (retain, nonatomic) PGMeaningCriteriaInfo *meaningCriteriaInfo;
@property (retain, nonatomic) NSArray *allMeaningCriteriaArray;
@property (readonly, nonatomic) NSString *meaningLabel;

+ (id)_allMeaningCriteriaClassArray;
+ (id)meaningCriteriaEvaluatorsForMeaningLabel:(id)a0 withDictionary:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0 meaningCriteriaInfo:(id)a1;
- (BOOL)allCriteriaPassesForMomentNode:(id)a0;
- (BOOL)allCriteriaIsValid;

@end
