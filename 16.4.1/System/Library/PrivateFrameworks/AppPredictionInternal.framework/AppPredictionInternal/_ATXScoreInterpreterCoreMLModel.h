@class NSString, NSArray, _PASLock;

@interface _ATXScoreInterpreterCoreMLModel : NSObject {
    NSString *_coreMLModelOutputName;
    NSArray *_coreMLInputFeatures;
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL hasOutputIndexedSubscript;
@property (readonly, nonatomic) unsigned long long numberOfFeatures;

+ (double)scoreForOutputValue:(id)a0 outputIndexedSubscript:(long long)a1;
+ (id)coreMLModelForCoreMLModelName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)featureAtIndex:(unsigned long long)a0;
- (double)predictionForEvaluatedFeatures:(id)a0 withOutputIndexedSubscript:(long long)a1;
- (id)getArgumentsToEvaluateByInitializingInstanceVariablesFromFeatures:(id)a0 outputSpecification:(id)a1;
- (id)initWithModelName:(id)a0 features:(id)a1 outputSpecification:(id)a2;

@end
