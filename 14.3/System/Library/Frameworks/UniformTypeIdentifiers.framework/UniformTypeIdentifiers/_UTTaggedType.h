@interface _UTTaggedType : UTType

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)referenceURL;
- (id)_typeRecord;
- (BOOL)isDeclared;
- (id)localizedDescription;
- (BOOL)_isImported;
- (BOOL)_isExported;
- (id)version;
- (BOOL)isPublicType;
- (id)supertypes;
- (id)_childTypes;
- (id)_parentTypes;
- (BOOL)_getEnclosureColor:(struct UTHardwareColor { unsigned char x0; unsigned char x1[3]; union { struct { unsigned char x0; unsigned char x1; unsigned char x2; } x0; int x1; } x2; } *)a0;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)a0;
- (id)_localizedDescriptionDictionary;
- (BOOL)_isWildcard;
- (BOOL)_isCoreType;
- (id)_preferredTagOfClass:(id)a0;
- (BOOL)isDynamic;
- (BOOL)conformsToType:(id)a0;
- (id)_subtypes;
- (id)tags;
- (Class)classForCoder;
- (id)identifier;

@end
