@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}

- (id)fill;
- (id)init;
- (void).cxx_destruct;
- (int)blendMode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBlendMode:(int)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setFill:(id)a0;

@end
