@class NSString;

@interface _LSSynthesizedExtensionPointRecord : LSExtensionPointRecord {
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x0; unsigned char x1[3]; unsigned int x2; unsigned int x3; unsigned char x4[16]; char x5[0]; } *)a1 length:(unsigned long long)a2;
- (id)_persistentIdentifierWithContext:(struct LSContext { id x0; } *)a0 tableID:(unsigned int)a1 unitID:(unsigned int)a2 unitBytes:(const void *)a3;
- (id)SDKDictionary;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)platform;
- (id)version;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;

@end
