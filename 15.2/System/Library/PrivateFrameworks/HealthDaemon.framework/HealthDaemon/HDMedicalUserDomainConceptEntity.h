@class NSString;

@interface HDMedicalUserDomainConceptEntity : HDUserDomainConceptEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)privateDataEntities;
+ (BOOL)willDeleteConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)privateSubEntities;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)foreignKeys;
+ (id)pruneWithProfile:(id)a0 nowDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)updateConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)predicateMatchingSemanticDuplicatesOf:(id)a0;
+ (Class)userDomainConceptClass;
+ (id)deduplicateUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)insertConcreteUserDomainConcept:(id)a0 userDomainConceptID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;


@end
