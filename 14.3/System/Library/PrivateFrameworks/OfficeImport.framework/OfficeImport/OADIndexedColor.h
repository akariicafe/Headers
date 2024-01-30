@interface OADIndexedColor : OADColor {
    unsigned long long mIndex;
}

+ (id)indexedColorWithIndex:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)colorFromPalette:(id)a0;

@end
