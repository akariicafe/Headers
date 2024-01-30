@class CKXAtomBindingImplementation;

@interface CKXAtomORCSchemaFormatVersionORCv2 : NSObject <CKXORCHelpers>

@property (readonly, nonatomic) CKXAtomBindingImplementation *binding;

- (void).cxx_destruct;
- (id)initWithBinding:(id)a0;
- (void)configureColumnsWithRootColumn:(void *)a0;
- (id)generateSchema;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)a0;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)a0;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)a0;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)a0;

@end
