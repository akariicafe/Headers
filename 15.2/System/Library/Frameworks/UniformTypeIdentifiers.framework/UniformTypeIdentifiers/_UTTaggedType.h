@interface _UTTaggedType : UTType

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)localizedDescription;
- (id)identifier;
- (unsigned long long)_getEnclosureColors:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0 count:(unsigned long long)a1;
- (id)_parentTypes;
- (BOOL)isPublicType;
- (BOOL)_isWildcard;
- (id)_subtypes;
- (id)version;
- (BOOL)isDeclared;
- (BOOL)_isExported;
- (id)_localizedDescriptionDictionary;
- (id)_typeRecord;
- (Class)classForCoder;
- (id)referenceURL;
- (BOOL)isDynamic;
- (BOOL)_isCoreType;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_childTypes;
- (BOOL)_isImported;
- (id)_preferredTagOfClass:(id)a0;
- (BOOL)conformsToType:(id)a0;
- (id)tags;
- (id)supertypes;

@end
