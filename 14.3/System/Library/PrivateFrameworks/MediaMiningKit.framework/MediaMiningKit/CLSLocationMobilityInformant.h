@interface CLSLocationMobilityInformant : CLSInformant

+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;

- (id)_locationMobilityClueForInvestigation:(id)a0;
- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
