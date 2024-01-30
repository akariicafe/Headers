@interface HDUserDomainConceptCollapser : NSObject

+ (id)collapseUserDomainConcept:(id)a0 with:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)mergeSubclassDataTo:(id)a0 fromDuplicateConcept:(id)a1;
+ (BOOL)preDeduplicationProcessingForUserDomainConcept:(id)a0 duplicateConcept:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)shouldDeleteDuplicateConcept;

- (id)init;

@end
