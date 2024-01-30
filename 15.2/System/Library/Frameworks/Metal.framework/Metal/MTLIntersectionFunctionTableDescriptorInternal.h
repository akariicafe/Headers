@interface MTLIntersectionFunctionTableDescriptorInternal : MTLIntersectionFunctionTableDescriptor {
    struct MTLIntersectionFunctionTableDescriptorPrivate { unsigned long long functionCount; BOOL forceResourceIndex; unsigned long long resourceIndex; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setResourceIndex:(unsigned long long)a0;
- (BOOL)forceResourceIndex;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)functionCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)setFunctionCount:(unsigned long long)a0;

@end
