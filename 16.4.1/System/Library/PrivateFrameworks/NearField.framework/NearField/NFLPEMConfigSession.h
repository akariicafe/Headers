@interface NFLPEMConfigSession : NFSession

- (BOOL)disableLPEMFeature:(unsigned long long)a0 error:(id *)a1;
- (BOOL)configureHardwareForLPEMWithError:(id *)a0;
- (BOOL)enableLPEMFeature:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)getLPEMFeaturesWithError:(id *)a0;

@end
