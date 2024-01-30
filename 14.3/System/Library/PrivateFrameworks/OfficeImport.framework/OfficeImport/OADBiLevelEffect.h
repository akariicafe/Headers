@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}

- (id)init;
- (float)threshold;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setThreshold:(float)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
