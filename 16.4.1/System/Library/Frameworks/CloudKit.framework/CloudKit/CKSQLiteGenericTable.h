@interface CKSQLiteGenericTable : CKSQLiteTable

+ (Class)entryClass;
+ (Class)genericTableClassForTOCTableEntry:(id)a0;
+ (id)genericTableForTOCEntry:(id)a0;
+ (void)setValue:(id)a0 forProperty:(id)a1 inObject:(id)a2;
+ (id)uniqueSubclassClassNameForClassName:(id)a0;
+ (id)valueForProperty:(id)a0 inObject:(id)a1;

- (void)setValue:(id)a0 forProperty:(id)a1 inObject:(id)a2;
- (id)valueForProperty:(id)a0 inObject:(id)a1;

@end
