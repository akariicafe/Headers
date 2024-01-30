@interface OADPointBulletSize : OADBulletSize {
    int mPoints;
}

- (int)points;
- (unsigned long long)hash;
- (id)initWithPoints:(int)a0;
- (BOOL)isEqual:(id)a0;

@end
