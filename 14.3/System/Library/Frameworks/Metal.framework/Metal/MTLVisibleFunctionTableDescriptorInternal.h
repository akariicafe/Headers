@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor {
    struct MTLVisibleFunctionTableDescriptorPrivate { unsigned long long functionCount; BOOL forceResourceIndex; unsigned long long resourceIndex; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (unsigned long long)resourceIndex;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)functionCount;
- (void)setResourceIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)forceResourceIndex;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setFunctionCount:(unsigned long long)a0;
- (void)setForceResourceIndex:(BOOL)a0;

@end
