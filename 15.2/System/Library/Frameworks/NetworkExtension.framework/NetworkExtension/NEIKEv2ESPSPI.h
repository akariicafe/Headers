@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying>

@property unsigned int value;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(unsigned int)a0;
- (unsigned long long)hash;

@end
