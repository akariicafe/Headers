@interface HDUserDomainConceptEducationContentSectionDataEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)privateSubEntities;
+ (BOOL)addSectionDataToCodable:(id)a0 educationContentSectionID:(long long)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)enumerateSectionDataForEducationContentSectionID:(long long)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)insertEducationContentSectionData:(id)a0 sectionPersistentID:(long long)a1 transaction:(id)a2 error:(id *)a3;

@end
