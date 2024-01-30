@interface HDUserDomainMedicalCodingStringEntity : HDHealthEntity

+ (id)databaseTable;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)enumerateMedicalCodingStringsWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)persistentIDForString:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)stringForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
