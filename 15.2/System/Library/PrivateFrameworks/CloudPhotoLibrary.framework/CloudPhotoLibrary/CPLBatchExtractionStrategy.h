@class NSEnumerator, NSString, NSArray, CPLBatchExtractionStep;
@protocol CPLBatchExtractionStrategyStorage;

@interface CPLBatchExtractionStrategy : NSObject {
    NSArray *_steps;
    NSEnumerator *_stepEnumerator;
    CPLBatchExtractionStep *_currentStep;
    BOOL _loggedForThisStep;
    BOOL _finished;
}

@property (readonly, copy, nonatomic) NSString *strategyName;
@property (readonly, weak, nonatomic) id<CPLBatchExtractionStrategyStorage> storage;
@property (readonly, nonatomic) NSString *scopeIdentifier;
@property (nonatomic) unsigned long long maximumRecordCountPerBatch;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *currentStepDescription;

+ (id)overQuotaStrategyWithStorage:(id)a0 coveringScopeIdentifier:(id)a1;
+ (void)setMaximumRecordCountPerBatch:(unsigned long long)a0;
+ (id)usualStrategyWithStorage:(id)a0 coveringScopeIdentifier:(id)a1;

- (void)_computeNextStep;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 storage:(id)a1 scopeIdentifier:(id)a2 steps:(id)a3;
- (BOOL)_hasChanges;
- (void)reset;
- (void)resetConditionallyFromNewIncomingChange:(id)a0;
- (BOOL)extractBatch:(out id *)a0 maximumResourceSize:(unsigned long long)a1 error:(id *)a2;

@end
