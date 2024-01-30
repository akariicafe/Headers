@class OADColor;

@interface OADBulletColorSpecification : OADBulletColor {
    OADColor *mColor;
}

- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBulletColor:(id)a0;

@end
