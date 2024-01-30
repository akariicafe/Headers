@interface CLSPartOfDayInformant : CLSInformant

+ (id)familyIdentifier;
+ (id)classIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
