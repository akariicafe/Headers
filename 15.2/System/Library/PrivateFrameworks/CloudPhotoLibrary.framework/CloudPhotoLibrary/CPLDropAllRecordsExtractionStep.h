@interface CPLDropAllRecordsExtractionStep : CPLBatchExtractionStep

- (id)shortDescription;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)a0;
- (void)reset;
- (BOOL)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;

@end
