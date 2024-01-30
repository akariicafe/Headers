@interface CHDPieDataValueProperties : CHDDataValueProperties {
    int mExplosion;
    BOOL mIsExplosionSet;
}

- (id)init;
- (int)explosion;
- (id)shallowCopyWithIndex:(unsigned long long)a0;
- (void)setExplosion:(int)a0;
- (BOOL)isExplosionSet;

@end
