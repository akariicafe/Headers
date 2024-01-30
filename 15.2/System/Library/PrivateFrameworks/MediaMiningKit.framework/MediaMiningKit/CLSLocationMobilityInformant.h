@interface CLSLocationMobilityInformant : CLSInformant

+ (id)familyIdentifier;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;
- (id)_locationMobilityClueForInvestigation:(id)a0;

@end
