@interface CLSPartOfDayInformant : CLSInformant

+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;
+ (id)classIdentifier;

- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;

@end
