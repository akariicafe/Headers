@class NSDictionary, NSArray;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    id /* block */ _filterBlock;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_queryDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)matchesPlugin:(unsigned int)a0 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned char x22; unsigned char x23; unsigned int x24; unsigned short x25; unsigned int x26; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x27; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a1 withDatabase:(id)a2;
- (unsigned long long)hash;

@end
