@class OADColor;

@interface OADBulletColorSpecification : OADBulletColor {
    OADColor *mColor;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)color;
- (BOOL)isEqual:(id)a0;
- (id)initWithBulletColor:(id)a0;

@end
