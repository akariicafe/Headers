@interface CLSClassificationInformant : CLSInformant

+ (id)familyIdentifier;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;
- (double)_confidenceForCount:(unsigned long long)a0 mu:(double)a1 sigma:(double)a2;

@end
