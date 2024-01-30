@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying>

@property unsigned long long value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(unsigned long long)a0;

@end
