@interface CHDPieDataValueProperties : CHDDataValueProperties {
    int mExplosion;
    BOOL mIsExplosionSet;
}

- (id)init;
- (id)shallowCopyWithIndex:(unsigned long long)a0;
- (int)explosion;
- (void)setExplosion:(int)a0;
- (BOOL)isExplosionSet;

@end
