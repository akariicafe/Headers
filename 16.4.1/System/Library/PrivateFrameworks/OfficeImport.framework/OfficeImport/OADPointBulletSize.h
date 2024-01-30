@interface OADPointBulletSize : OADBulletSize {
    int mPoints;
}

- (id)initWithPoints:(int)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)points;

@end
