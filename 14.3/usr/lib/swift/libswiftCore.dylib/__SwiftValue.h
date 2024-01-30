@interface __SwiftValue : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_swiftTypeName;
- (const struct TargetMetadata<swift::InProcess> { unsigned long long x0; } *)_swiftTypeMetadata;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (const struct OpaqueValue { } *)_swiftValue;

@end
