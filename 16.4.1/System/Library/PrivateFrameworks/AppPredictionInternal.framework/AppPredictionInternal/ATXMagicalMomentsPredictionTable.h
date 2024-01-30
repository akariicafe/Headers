@class NSMutableArray;

@interface ATXMagicalMomentsPredictionTable : NSObject <NSSecureCoding> {
    NSMutableArray *_predictionTableEntries;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPredictionTableEntries:(id)a0;
- (void)addPrediction:(id)a0 withApplicablePredicates:(id)a1;
- (void)addPredictions:(id)a0 withApplicablePredicates:(id)a1;
- (id)deduplicatePredictions:(id)a0;
- (id)describeTable;
- (id)predictionTableEntries;
- (id)predictionsForTriggerEvent:(id)a0;
- (id)removeRestrictedPredictions:(id)a0;
- (id)validPredictionsFromTableEntries:(id)a0 event:(id)a1;

@end
