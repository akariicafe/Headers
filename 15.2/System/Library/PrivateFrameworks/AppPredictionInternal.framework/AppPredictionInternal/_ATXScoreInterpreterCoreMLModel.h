@class NSString, NSArray, _PASLock;

@interface _ATXScoreInterpreterCoreMLModel : NSObject {
    NSString *_coreMLModelOutputName;
    NSArray *_coreMLInputFeatures;
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL hasOutputIndexedSubscript;
@property (readonly, nonatomic) unsigned long long numberOfFeatures;

+ (id)coreMLModelForCoreMLModelName:(id)a0;
+ (double)scoreForOutputValue:(id)a0 outputIndexedSubscript:(long long)a1;

- (id)featureAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithModelName:(id)a0 features:(id)a1 outputSpecification:(id)a2;
- (id)getArgumentsToEvaluateByInitializingInstanceVariablesFromFeatures:(id)a0 outputSpecification:(id)a1;
- (double)predictionForEvaluatedFeatures:(id)a0 withOutputIndexedSubscript:(long long)a1;

@end
