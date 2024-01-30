@class NSString, GPBFloatArray, NSMutableArray, Metrics;

@interface PFLDeviceModelUpdate : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int modelVersion;
@property (retain, nonatomic) NSMutableArray *shapesArray;
@property (readonly, nonatomic) unsigned long long shapesArray_Count;
@property (retain, nonatomic) GPBFloatArray *flattenedPrivatizedWeightDiffsArray;
@property (readonly, nonatomic) unsigned long long flattenedPrivatizedWeightDiffsArray_Count;
@property (retain, nonatomic) Metrics *evaluationMetrics;
@property (nonatomic) BOOL hasEvaluationMetrics;
@property (nonatomic) int numSamples;

+ (id)descriptor;

@end
