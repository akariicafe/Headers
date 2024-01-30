@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying> {
    unsigned long long _value;
}

@property (readonly) unsigned long long value;

- (id)initWithValue:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
