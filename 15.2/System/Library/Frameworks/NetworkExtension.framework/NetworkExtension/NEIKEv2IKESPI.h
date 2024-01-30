@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying>

@property unsigned long long value;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(unsigned long long)a0;
- (unsigned long long)hash;

@end
