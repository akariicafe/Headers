@interface CKSQLiteGenericTable : CKSQLiteTable

+ (Class)entryClass;
+ (Class)genericTableClassForTOCTableEntry:(id)a0;
+ (id)genericTableForTOCEntry:(id)a0;
+ (void)setValue:(id)a0 forProperty:(id)a1 propertyInfo:(id)a2 inObject:(id)a3;
+ (id)uniqueSubclassClassNameForClassName:(id)a0;
+ (BOOL)useNSCoding;
+ (id)valueForProperty:(id)a0 propertyInfo:(id)a1 inObject:(id)a2;

- (void)setValue:(id)a0 forProperty:(id)a1 propertyInfo:(id)a2 inObject:(id)a3;
- (id)valueForProperty:(id)a0 propertyInfo:(id)a1 inObject:(id)a2;

@end
