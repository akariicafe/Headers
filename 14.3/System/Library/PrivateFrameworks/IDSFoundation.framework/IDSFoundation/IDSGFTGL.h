@interface IDSGFTGL : IDSGlobalLink

- (BOOL)_setupNewQRLinkIfNecessary:(id)a0;
- (BOOL)_postProcessAllocbindResponse:(id)a0 candidatePair:(id)a1 candidatePairToken:(id)a2;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)a0 error:(long long)a1;
- (void)startWithOptions:(id)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (long long)_getQRAllocateType;

@end
