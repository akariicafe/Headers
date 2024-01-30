@class NSDictionary, NSArray;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    id /* block */ _filterBlock;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)matchesPlugin:(unsigned int)a0 pluginData:(const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; struct LSVersionNumber { unsigned char x0[32]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned char x20; unsigned char x21; unsigned int x22; unsigned short x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; } *)a1 withDatabase:(id)a2;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_queryDictionary;
- (BOOL)isEqual:(id)a0;
- (id)_initWithQueryDictionary:(id)a0 applyFilter:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
