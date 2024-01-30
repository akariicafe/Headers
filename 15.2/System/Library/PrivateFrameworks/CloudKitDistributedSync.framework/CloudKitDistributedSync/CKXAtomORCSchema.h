@interface CKXAtomORCSchema : NSObject <CKXORCHelpers>

- (unsigned long long)topLevelIndexForStruct:(unsigned long long)a0;
- (id)generateSchema;
- (void)configureColumnsWithRootColumn:(void *)a0;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)a0;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)a0;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)a0;

@end
