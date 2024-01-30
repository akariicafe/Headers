@interface GKSystemArc4RandomSource : GKRandomSource

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;

@end
