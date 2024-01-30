@interface HDUserDomainConceptEducationContentSectionEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)privateSubEntities;
+ (BOOL)addSectionsToCodable:(id)a0 educationContentID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateLocalizedEducationContentSectionsWithEducationContentID:(long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)insertLocalizedEducationContentSectionsFor:(id)a0 educationContentID:(long long)a1 transaction:(id)a2 error:(id *)a3;

@end
