@class CKSQLiteTOCTable, CKSQLiteTOCTableGroupTable;

@interface CKSQLiteTOCTableGroup : CKSQLiteSharedTableGroup {
    CKSQLiteTOCTableGroupTable *_tocTableGroup;
    CKSQLiteTOCTable *_tocTable;
}

+ (id)TOCTableGroupInDatabase:(id)a0;
+ (id)bootstrapNewDatabase:(id)a0;
+ (double)expirationTime;

- (id)tocTableGroup;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 database:(id)a2;
- (id)tocTable;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;

@end
