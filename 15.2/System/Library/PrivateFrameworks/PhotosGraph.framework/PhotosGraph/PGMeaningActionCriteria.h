@class NSString;

@interface PGMeaningActionCriteria : NSObject <PGMeaningCriteria>

@property (retain, nonatomic) NSString *actionName;
@property (nonatomic) int actionValue;
@property (nonatomic) double confidenceHighPrecisionThreshold;
@property (nonatomic) double confidenceHighRecallThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesCriteriaWithTrait:(id)a0;

@end
