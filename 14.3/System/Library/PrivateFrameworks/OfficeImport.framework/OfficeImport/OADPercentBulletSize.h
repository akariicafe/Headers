@interface OADPercentBulletSize : OADBulletSize {
    float mPercent;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)percent;
- (id)initWithPercent:(float)a0;

@end
