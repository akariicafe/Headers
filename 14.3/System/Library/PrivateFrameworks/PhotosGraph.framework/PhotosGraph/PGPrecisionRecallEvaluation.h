@class NSString;

@interface PGPrecisionRecallEvaluation : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned long long falseNegatives;
@property (readonly, nonatomic) unsigned long long falsePositives;
@property (readonly, nonatomic) unsigned long long trueNegatives;
@property (readonly, nonatomic) unsigned long long truePositives;

- (double)recall;
- (double)precision;
- (id)description;
- (id)initWithIdentifier:(id)a0 category:(id)a1;
- (id)initWithIdentifier:(id)a0 category:(id)a1 truePositives:(unsigned long long)a2 falsePositives:(unsigned long long)a3 falseNegatives:(unsigned long long)a4 trueNegatives:(unsigned long long)a5;
- (void)evaluateWithGroundTruthResults:(id)a0 andInferenceResults:(id)a1;
- (void)evaluateWithGroundTruthResult:(BOOL)a0 andInferenceResult:(BOOL)a1;
- (id)csvHeader;
- (double)fMeasure;
- (double)fMeasure:(double)a0;

@end
