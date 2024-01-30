@interface PearlAutoBugCapture : BiometricAutoBugCapture

- (id)getTypeForReason:(unsigned long long)a0;
- (id)getSubtypeForReason:(unsigned long long)a0;
- (BOOL)sendSignature:(id)a0 withDuration:(double)a1;

@end
