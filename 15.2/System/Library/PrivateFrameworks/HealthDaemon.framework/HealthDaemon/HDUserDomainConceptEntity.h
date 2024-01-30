@interface HDUserDomainConceptEntity : HDHealthEntity

+ (id)propertyForSyncAnchor;
+ (id)databaseTable;
+ (id)privateDataEntities;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateSubEntities;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (BOOL)updateLinksTargetingUserDomainConceptUUID:(id)a0 toTargetUserDomainConceptUUID:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)propertyForSyncProvenance;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 syncProvenance:(long long)a2 syncVersion:(struct { int x0; int x1; })a3 transaction:(id)a4 error:(id *)a5;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateUserDomainConceptsWithPredicate:(id)a0 limit:(long long)a1 orderingTerms:(id)a2 transaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (Class)userDomainConceptClass;
+ (BOOL)updatePrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)deleteUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)retrievePrivateDataEntitiesForUserDomainConcept:(id)a0 persistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (long long)storeUserDomainConcept:(id)a0 method:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)insertPrivateDataEnitiesForUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)defaultForeignKey;

@end
