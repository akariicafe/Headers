@class NSString;
@protocol CPLBatchExtractionStrategyStorage;

@interface CPLBatchExtractionStep : NSObject

@property (readonly, nonatomic) id<CPLBatchExtractionStrategyStorage> storage;
@property (readonly, copy, nonatomic) NSString *scopeIdentifier;

- (void).cxx_destruct;
- (void)reset;
- (id)shortDescription;
- (id)description;
- (void)resetConditionallyFromNewIncomingChange:(id)a0;
- (id)initWithStorage:(id)a0 scopeIdentifier:(id)a1;
- (BOOL)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
