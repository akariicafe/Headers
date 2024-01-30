@interface IDSFTGL : IDSGlobalLink

- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (void)startWithOptions:(id)a0;
- (void)sendSKEData:(id)a0;
- (BOOL)_setupNewQRLinkIfNecessary:(id)a0;
- (BOOL)_postProcessAllocbindResponse:(id)a0 candidatePair:(id)a1 candidatePairToken:(id)a2;
- (void)setHasPendingAllocation:(BOOL)a0;
- (void)setDefaultUnderlyingLink:(char)a0;
- (void)_resetRetryCountForCandidatePair:(id)a0;

@end
