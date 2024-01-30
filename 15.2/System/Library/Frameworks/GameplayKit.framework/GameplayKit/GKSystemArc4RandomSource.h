@interface GKSystemArc4RandomSource : GKRandomSource

- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
