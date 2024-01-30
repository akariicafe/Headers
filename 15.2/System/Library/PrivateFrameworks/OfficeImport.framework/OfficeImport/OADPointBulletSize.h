@interface OADPointBulletSize : OADBulletSize {
    int mPoints;
}

- (BOOL)isEqual:(id)a0;
- (int)points;
- (unsigned long long)hash;
- (id)initWithPoints:(int)a0;

@end
