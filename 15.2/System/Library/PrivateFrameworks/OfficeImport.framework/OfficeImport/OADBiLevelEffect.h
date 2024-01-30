@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}

- (float)threshold;
- (void)setThreshold:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
