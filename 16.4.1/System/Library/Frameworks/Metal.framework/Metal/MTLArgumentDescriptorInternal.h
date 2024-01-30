@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (unsigned long long)arrayLength;
- (void)setIndex:(unsigned long long)a0;
- (void)setAccess:(unsigned long long)a0;
- (unsigned long long)access;
- (void)setTextureType:(unsigned long long)a0;
- (unsigned long long)textureType;
- (void)setArrayLength:(unsigned long long)a0;
- (void)setDataType:(unsigned long long)a0;
- (unsigned long long)index;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)dataType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)constantBlockAlignment;
- (void)setConstantBlockAlignment:(unsigned long long)a0;

@end
