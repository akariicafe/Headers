@interface ML3SetValuesForPropertiesOperation : ML3DatabaseOperation

- (BOOL)_execute:(id *)a0;
- (unsigned long long)type;
- (BOOL)_setValues:(id)a0 forProperties:(id)a1 withEntityClass:(Class)a2 usingPersistentID:(long long)a3 connection:(id)a4 error:(id *)a5;

@end
