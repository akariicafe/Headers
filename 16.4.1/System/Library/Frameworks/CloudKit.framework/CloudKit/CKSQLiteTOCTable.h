@interface CKSQLiteTOCTable : CKSQLiteTOCTableBase

+ (Class)entryClass;
+ (id)dbProperties;
+ (id)dbTableName;

- (id)tocEntriesWithGroupID:(id)a0 error:(id *)a1;

@end
