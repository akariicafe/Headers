@class OADBlipRef;

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef *mImage;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)image;
- (void).cxx_destruct;
- (id)initWithBlipRef:(id)a0;

@end
