@interface HDListUserDomainConceptEntity : HDUserDomainConceptEntity

+ (id)databaseTable;
+ (id)privateDataEntities;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (Class)userDomainConceptClass;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;

@end
