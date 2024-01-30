@class NSMutableArray;

@interface ATXMagicalMomentsPredictionTable : NSObject <NSSecureCoding> {
    NSMutableArray *_predictionTableEntries;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addPredictions:(id)a0 withApplicablePredicates:(id)a1;
- (id)predictionsForTriggerEvent:(id)a0;
- (id)initWithPredictionTableEntries:(id)a0;
- (void)addPrediction:(id)a0 withApplicablePredicates:(id)a1;
- (id)validPredictionsFromTableEntries:(id)a0 event:(id)a1;
- (id)deduplicatePredictions:(id)a0;
- (id)removeRestrictedPredictions:(id)a0;
- (id)describeTable;
- (id)predictionTableEntries;

@end
