@protocol CKXORCHelpers;

@interface CKXAtomORCSchema : NSObject <CKXORCHelpers>

@property (readonly, nonatomic) id<CKXORCHelpers> implementation;

- (void).cxx_destruct;
- (void)configureColumnsWithRootColumn:(void *)a0;
- (id)generateSchema;
- (id)initWithBinding:(id)a0 formatVersion:(unsigned char)a1;
- (unsigned long long)listColumnIndexForReference:(unsigned long long)a0;
- (unsigned long long)structReferenceIndexForReference:(unsigned long long)a0;
- (unsigned long long)topLevelIndexForStruct:(unsigned long long)a0;
- (unsigned long long)valueColumnIndexForField:(unsigned long long)a0;

@end
