@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setPresetShadowType:(int)a0;
- (int)presetShadowType;
- (id)equivalentOuterShadowEffect;

@end
