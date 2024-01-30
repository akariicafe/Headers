@interface HDUserDomainMedicalCodingStringEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)stringForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)persistentIDForString:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateMedicalCodingStringsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;

@end
