@class OADBlipRef;

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef *mImage;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (unsigned long long)hash;
- (id)initWithBlipRef:(id)a0;

@end
