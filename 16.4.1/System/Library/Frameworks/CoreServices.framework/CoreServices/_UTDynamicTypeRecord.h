@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (BOOL)isWildcard;
- (id)declaration;
- (id)_declaringBundleBookmark;
- (id)childTypeIdentifiers;
- (id)_localizedDescription;
- (BOOL)isImported;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)parentTypeIdentifiers;
- (void)_LSRecord_resolve_pedigree;
- (id)_delegatePath;
- (BOOL)isCoreType;
- (id)declaringBundleRecord;
- (id)pedigree;
- (id)tagSpecification;
- (id)referenceURL;
- (BOOL)isExported;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (BOOL)isDeclared;
- (BOOL)isInPublicDomain;
- (void)encodeWithCoder:(id)a0;
- (id)version;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isActive;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 dynamicUTI:(id)a1;
- (BOOL)isChildOfTypeIdentifier:(id)a0;
- (BOOL)isDynamic;
- (id)preferredTagOfClass:(id)a0;
- (void).cxx_destruct;

@end
