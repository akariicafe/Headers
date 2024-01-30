@class HDProfile, HDDatabaseValueCache;

@interface HDOntologyConceptManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_conceptsByIdentifier;
}

+ (id)predicateForConceptsFollowingRelationshipOfTypes:(id)a0 fromSubjectId:(id)a1;
+ (id)predicateMatchingConceptWithID:(id)a0;
+ (id)conceptForCodingCollection:(id)a0 configuration:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateConceptsMatchingPredicate:(id)a0 options:(unsigned long long)a1 limit:(unsigned long long)a2 transaction:(id)a3 error:(id *)a4 enumerationHandler:(id /* block */)a5;
+ (BOOL)enumerateConceptsMatchingPredicate:(id)a0 profile:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)enumerateRelationshipsMatchingPredicate:(id)a0 options:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (BOOL)followRelationshipsWithTypes:(id)a0 startingIdentifier:(id)a1 options:(unsigned long long)a2 ontologyTransaction:(id)a3 conceptOut:(id *)a4 deletedRelationshipVersionOut:(long long *)a5 error:(id *)a6;
+ (id)inflateGraphWithRootConceptsPredicate:(id)a0 limit:(long long)a1 maximumDepth:(long long)a2 attributeTypes:(id)a3 relationshipTypes:(id)a4 ontologyTransaction:(id)a5 error:(id *)a6;
+ (id)predicateForRelationshipsWithTypes:(id)a0 onConceptId:(id)a1;
+ (id)predicateMatchingConceptsWithAttributeType:(long long)a0 attributeValue:(id)a1;
+ (id)predicateMatchingConceptsWithAttributeType:(long long)a0 likeAttributeValue:(id)a1;
+ (id)predicateMatchingConceptsWithRelationshipType:(long long)a0 withObjectId:(id)a1;
+ (id)predicateMatchingConceptsWithRelationshipType:(long long)a0 withSubjectId:(id)a1;
+ (id)predicateMatchingRelationshipsWithSubjectId:(id)a0 relationshipType:(long long)a1;
+ (id)relationshipsForConceptWithIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;

- (id)initWithProfile:(id)a0;
- (id)conceptForIdentifier:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)conceptForIdentifier:(id)a0 options:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;
- (id)conceptsForIdentifiers:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)init;
- (id)conceptsForIdentifiers:(id)a0 options:(unsigned long long)a1 transaction:(id)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
