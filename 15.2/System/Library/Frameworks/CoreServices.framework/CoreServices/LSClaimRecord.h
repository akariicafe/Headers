@class LSBundleRecord, NSDictionary, NSURL, NSString, _LSLocalizedStringRecord, NSArray;

@interface LSClaimRecord : LSRecord {
    LSBundleRecord *_weakClaimingBundleRecord;
}

@property (readonly) NSDictionary *iconDictionary;
@property (readonly) NSURL *iconResourceBundleURL;
@property (readonly) _LSLocalizedStringRecord *_localizedName;
@property (readonly) LSBundleRecord *_claimingBundleRecord;
@property (readonly, nonatomic) id compatibilityObject;
@property (readonly) NSString *localizedName;
@property (readonly) NSArray *typeIdentifiers;
@property (readonly) NSArray *URLSchemes;
@property (readonly) NSString *handlerRank;
@property (readonly) unsigned int role;
@property (readonly) LSBundleRecord *claimingBundleRecord;

+ (id)_propertyClasses;
+ (BOOL)supportsSecureCoding;

- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)iconDictionaryWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)_localizedNameWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (void)_LSRecord_resolve_iconDictionary;
- (id)URLSchemesWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)_claimingBundleRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)handlerRankWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (unsigned int)roleWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)iconResourceBundleURLWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (id)typeIdentifiersWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct { unsigned int x0; unsigned int x1; unsigned int x2; short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[8]; unsigned int x9; unsigned int x10; unsigned int x11; } *)a3;
- (void)_LSRecord_resolve__claimingBundleRecord;
- (void)_LSRecord_resolve_role;
- (void)_LSRecord_resolve_iconResourceBundleURL;
- (void)_LSRecord_resolve_typeIdentifiers;
- (void)_LSRecord_resolve__localizedName;
- (void)_LSRecord_resolve_handlerRank;
- (void)_LSRecord_resolve_URLSchemes;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
