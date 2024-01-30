@interface HDUserDomainConceptOntologyContentRefresher : NSObject

+ (id)refreshOntologyContentForUserDomainConcept:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)_determineIfEligibleForRefreshAndPerformRefreshOperationForConcept:(id)a0 ontologyTransaction:(id)a1 outRefreshedUserDomainConcept:(id *)a2 error:(id *)a3;
+ (long long)_isAbleToPromoteConceptToGrouper:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (long long)_isAbleToUpdateUserDomainConcept:(id)a0 outAdditionalCodings:(id *)a1 outConceptToRefreshWith:(id *)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (long long)_loadMercuryConceptForRefreshFromUserDomainConcept:(id)a0 ontologyCoding:(id)a1 outConcept:(id *)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (long long)_performAutomaticGrouperPromotionForConcept:(id)a0 userDomainConcept:(id)a1 outConcept:(id *)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (id)_refreshUserDomainConcept:(id)a0 withOntologyConcept:(id)a1 codings:(id)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (BOOL)performAdditionalCleanupAfterRefreshingUserDomainConcept:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (id)propertyCollectionWithOntologyConcept:(id)a0 ontologyTransaction:(id)a1 error:(id *)a2;
+ (long long)resolveOntologyConceptForRefreshFromUserDomainConceptWithoutOntologyCoding:(id)a0 outAdditionalCodings:(id *)a1 outConceptToRefreshWith:(id *)a2 ontologyTransaction:(id)a3 error:(id *)a4;
+ (BOOL)supportsAutomaticGrouperPromotion;

@end
