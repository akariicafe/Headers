@class LSBundleRecord;

@interface _UTDeclaredTypeRecord : UTTypeRecord {
    LSBundleRecord *_weakDeclaringBundleRecord;
}

@property (readonly) unsigned int _rawFlags;
@property (readonly) LSBundleRecord *_declaringBundleRecord;

+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;

- (id)pedigree;
- (BOOL)isWildcard;
- (BOOL)isExported;
- (BOOL)isImported;
- (BOOL)isCoreType;
- (id)referenceURL;
- (id)declaration;
- (void)_enumerateRelatedTypesWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)parentTypeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (void)_enumerateRelatedTypeStructuresWithContext:(struct LSContext { id x0; } *)a0 unitID:(unsigned int)a1 maximumDegreeOfSeparation:(long long)a2 block:(id /* block */)a3;
- (id)_declaringBundleRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)_localizedDescriptionWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (unsigned int)_rawFlagsWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (void)_LSRecord_resolve_parentTypeIdentifiers;
- (id)tagSpecificationWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)identifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)_delegatePathWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)_declaringBundleBookmarkWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)_delegatePath;
- (void)_LSRecord_resolve__localizedDescription;
- (id)versionWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)referenceURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (void)_LSRecord_resolve__declaringBundleRecord;
- (id)declarationWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (void)_LSRecord_resolve__declaringBundleBookmark;
- (BOOL)isDeclared;
- (id)pedigreeWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)childTypeIdentifiers;
- (id)childTypeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7[8]; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; } *)a3;
- (id)_declaringBundleBookmark;
- (void)_LSRecord_resolve_childTypeIdentifiers;
- (void)_LSRecord_resolve_tagSpecification;
- (id)parentTypeIdentifiers;
- (id)_localizedDescription;
- (id)declaringBundleRecord;
- (id)tagSpecification;
- (BOOL)isInPublicDomain;
- (void)_LSRecord_resolve_identifier;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (void)_LSRecord_resolve__rawFlags;
- (BOOL)conformsToTypeIdentifier:(id)a0;
- (void)_LSRecord_resolve_pedigree;
- (void)_LSRecord_resolve_version;
- (void)_LSRecord_resolve_declaration;
- (void)_LSRecord_resolve_referenceURL;
- (void)_LSRecord_resolve__delegatePath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isActive;
- (id)version;
- (BOOL)isDynamic;
- (id)identifier;

@end
