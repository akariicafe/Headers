@class NSString;

@interface CPLByClassExtractionStep : CPLBatchExtractionStep {
    void /* function */ *_query;
}

@property (readonly, nonatomic) Class extractionClass;
@property (readonly, nonatomic) unsigned long long maximumCount;
@property (readonly, copy, nonatomic) NSString *queryDescription;

- (id)shortDescription;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (id)initWithStorage:(id)a0 scopeIdentifier:(id)a1 description:(id)a2 class:(Class)a3 maximumCount:(unsigned long long)a4 query:(void /* function */ *)a5;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
