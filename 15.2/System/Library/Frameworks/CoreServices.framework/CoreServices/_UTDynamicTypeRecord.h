@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {
    NSString *_identifier;
}

+ (id)_propertyClasses;
+ (BOOL)supportsSecureCoding;

- (id)pedigree;
- (BOOL)isExported;
- (BOOL)isImported;
- (BOOL)isCoreType;
- (id)declaration;
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_delegatePath;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)identifier;
- (id)tagSpecification;
- (BOOL)isInPublicDomain;
- (id)parentTypeIdentifiers;
- (id)_localizedDescription;
- (id)declaringBundleRecord;
- (id)preferredTagOfClass:(id)a0;
- (id)childTypeIdentifiers;
- (void)_LSRecord_resolve_pedigree;
- (BOOL)isChildOfTypeIdentifier:(id)a0;
- (id)_declaringBundleBookmark;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 dynamicUTI:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isActive;
- (id)version;
- (BOOL)isDeclared;
- (BOOL)isWildcard;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)referenceURL;
- (BOOL)isDynamic;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
