@class LSBundleRecord, NSDictionary, NSString, LSPlugInKitProxy, NSUUID, LSExtensionPointRecord;

@interface LSApplicationExtensionRecord : LSBundleRecord {
    LSBundleRecord *_weakContainingBundleRecord;
}

@property (readonly) NSDictionary *iconDictionary;
@property (readonly) LSBundleRecord *_containingBundleRecord;
@property (readonly, nonatomic) LSPlugInKitProxy *compatibilityObject;
@property (readonly) NSString *effectiveBundleIdentifier;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) LSBundleRecord *containingBundleRecord;
@property (readonly) LSExtensionPointRecord *extensionPointRecord;

+ (id)enumeratorWithExtensionPointRecord:(id)a0 options:(unsigned long long)a1;
+ (BOOL)supportsSecureCoding;
+ (id)enumeratorWithOptions:(unsigned long long)a0;
+ (id)_propertyClasses;

- (id)effectiveBundleIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a3;
- (id)iconDictionaryWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a3;
- (id)managedPersonas;
- (id)_replacementObjectForResolvedPropertyValue:(id)a0 forGetter:(SEL)a1 encoder:(id)a2;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x0; unsigned char x1[3]; unsigned int x2; unsigned int x3; unsigned char x4[16]; char x5[0]; } *)a1 length:(unsigned long long)a2;
- (char)developerType;
- (void)_LSRecord_resolve__containingBundleRecord;
- (void)_LSRecord_resolve_managedPersonas;
- (BOOL)_containerized;
- (unsigned long long)_containerClass;
- (id)extensionPointRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a3;
- (void)_LSRecord_resolve_effectiveBundleIdentifier;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 pluginID:(unsigned int)a1 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a2 error:(id *)a3;
- (id)_compatibilityObjectWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)uniqueIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a3;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (void)_LSRecord_resolve_iconDictionary;
- (id)managedPersonasWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a3;
- (void)_LSRecord_resolve_uniqueIdentifier;
- (id)_containingBundleRecordWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a3;
- (void)_detachFromContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)_initWithUUID:(id)a0 node:(id)a1 bundleIdentifier:(id)a2 context:(struct LSContext { id x0; } *)a3 error:(id *)a4;
- (void)_LSRecord_resolve_extensionPointRecord;
- (BOOL)_usesSystemPersona;
- (id)intentsRestrictedWhileLocked;
- (id)_intentsArrayForKey:(id)a0;
- (id)initWithUUID:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)supportedIntentMediaCategories;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)supportedIntents;
- (id)initWithURL:(id)a0 error:(id *)a1;

@end
