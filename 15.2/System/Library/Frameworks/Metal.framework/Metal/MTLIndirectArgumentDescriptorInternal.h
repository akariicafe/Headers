@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)index;
- (unsigned long long)arrayLength;
- (unsigned long long)dataType;
- (void)setDataType:(unsigned long long)a0;
- (void)setArrayLength:(unsigned long long)a0;
- (unsigned long long)textureType;
- (unsigned long long)access;
- (void)setAccess:(unsigned long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTextureType:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hash;
- (unsigned long long)constantBlockAlignment;
- (void)setConstantBlockAlignment:(unsigned long long)a0;

@end
