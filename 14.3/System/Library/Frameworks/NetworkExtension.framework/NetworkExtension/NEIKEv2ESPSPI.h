@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying>

@property unsigned int value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(unsigned int)a0;

@end
