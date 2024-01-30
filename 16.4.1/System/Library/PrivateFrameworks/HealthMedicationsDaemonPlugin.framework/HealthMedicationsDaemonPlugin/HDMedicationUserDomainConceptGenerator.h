@interface HDMedicationUserDomainConceptGenerator : HDUserDomainConceptOntologyContentRefresher

+ (BOOL)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (id)propertyCollectionWithOntologyConcept:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;

@end
