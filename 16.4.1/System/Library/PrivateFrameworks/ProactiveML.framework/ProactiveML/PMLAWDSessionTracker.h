@interface PMLAWDSessionTracker : PMLAWDBaseTracker

+ (id)trackerForModelName:(id)a0 modelVersion:(id)a1;

- (void)trackSessionWithCovariates:(id)a0 label:(unsigned long long)a1 locale:(id)a2;
- (void)trackSessionWithCovariates:(id)a0 label:(unsigned long long)a1 locale:(id)a2 supervisionType:(unsigned long long)a3;

@end
