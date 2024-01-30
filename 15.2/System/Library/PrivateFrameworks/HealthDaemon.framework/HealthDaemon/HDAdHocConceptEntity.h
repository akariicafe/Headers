@interface HDAdHocConceptEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)generateAdHocConceptForCodingCollection:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteNonIndexedConceptsWithTransaction:(id)a0 error:(id *)a1;
+ (id)adHocConceptForCodingCollection:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)enumerateAdHocConceptWithRawIdentifiers:(id)a0 profile:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)adHocConceptForIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;

@end
