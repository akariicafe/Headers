@class OADBlipRef;

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef *mImage;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)initWithBlipRef:(id)a0;

@end
