@class NSDictionary, NSArray, NSString;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    id /* block */ _filterBlock;
    struct optional<NSString *> { union { char __null_state_; NSString *__val_; } ; BOOL __engaged_; } _cachedSystemMode;
    struct unfair_lock_mutex { unsigned int _os_unfair_lock_opaque; } _systemModeMutex;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_queryDictionary;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (BOOL)matchesPlugin:(unsigned int)a0 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)a1 withDatabase:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)systemMode;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_initWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;

@end
