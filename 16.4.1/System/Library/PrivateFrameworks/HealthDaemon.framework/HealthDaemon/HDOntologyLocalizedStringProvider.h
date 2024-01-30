@interface HDOntologyLocalizedStringProvider : NSObject

+ (id)_localizedLoggingUnitForAttribute:(id)a0 locale:(id)a1 propertyType:(long long)a2;
+ (id)_nullLocalizedOntologyStringsWithVersion:(long long)a0 localesToDelete:(id)a1 propertyType:(long long)a2;
+ (id)localizedLoggingUnitsForConcept:(id)a0;
+ (id)localizedOntologyPreferredNamesForConcept:(id)a0 version:(id)a1 withUserDomainConceptPropertyType:(long long)a2;
+ (id)localizedOntologyPreferredNamesForConcept:(id)a0 withUserDomainConceptPropertyType:(long long)a1;
+ (id)nullLocalizedOntologyLoggingUnitsWithVersion:(long long)a0 withUserDomainConceptPropertyType:(long long)a1;
+ (id)nullLocalizedOntologyPreferredNamesWithVersion:(long long)a0 withUserDomainConceptPropertyType:(long long)a1;

@end
