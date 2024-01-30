@interface CHDPieDataValueProperties : CHDDataValueProperties {
    int mExplosion;
    BOOL mIsExplosionSet;
}

- (id)init;
- (int)explosion;
- (BOOL)isExplosionSet;
- (void)setExplosion:(int)a0;
- (id)shallowCopyWithIndex:(unsigned long long)a0;

@end
