@class NSArray;

@interface HMIVideoAnalyzerMutableReportComparison : HMFObject

@property (readonly) float precision;
@property (readonly) float recall;
@property (readonly) NSArray *truePositiveKeys;
@property (readonly) NSArray *falseNegativeKeys;
@property (readonly) NSArray *falsePositiveKeys;
@property (readonly) long long truePositive;
@property (readonly) long long falseNegative;
@property (readonly) long long falsePositive;

- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTruePositiveKeys:(id)a0 falseNegativeKeys:(id)a1 falsePositiveKeys:(id)a2 groupByKey:(BOOL)a3;

@end
