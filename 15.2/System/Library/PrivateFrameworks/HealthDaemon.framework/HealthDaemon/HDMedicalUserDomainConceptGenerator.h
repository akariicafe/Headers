@interface HDMedicalUserDomainConceptGenerator : NSObject

+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)generateUserDomainConceptForMedicalRecord:(id)a0 entityPersistentID:(id)a1 insertionContext:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)remapMedicalRecordsIfNeededForUserDomainConcept:(id)a0 shouldExcludeExistingConcept:(BOOL)a1 ontologyTransaction:(id)a2 transaction:(id)a3 error:(id *)a4;

@end
