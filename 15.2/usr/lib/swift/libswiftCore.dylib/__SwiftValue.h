@interface __SwiftValue : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (const struct OpaqueValue { } *)_swiftValue;
- (id)description;
- (id)_swiftTypeName;
- (BOOL)isEqual:(id)a0;
- (const void *)_swiftTypeMetadata;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)debugDescription;

@end
