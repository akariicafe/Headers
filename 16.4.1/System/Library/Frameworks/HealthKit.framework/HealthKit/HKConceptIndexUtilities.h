@interface HKConceptIndexUtilities : NSObject

+ (id)firstComponentForKeyPath:(id)a0 error:(id *)a1;
+ (BOOL)applyConcepts:(id)a0 toIndexableObject:(id)a1 keyPath:(id)a2 error:(id *)a3;
+ (BOOL)assignError:(id *)a0 forInvalidKeyPath:(id)a1 inClass:(Class)a2;
+ (id)conceptsForIndexedConcepts:(id)a0 expectedCount:(long long)a1 context:(id)a2 error:(id *)a3;
+ (id)indexedCodingsForCodingCollections:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)keyPathRemovingFirstComponentFromKeyPath:(id)a0 error:(id *)a1;
+ (id)keyPaths:(id)a0 prefix:(id)a1;
+ (id)medicalCodingCollectionForIndexableObject:(id)a0 keyPath:(id)a1 error:(id *)a2;

- (id)init;

@end
