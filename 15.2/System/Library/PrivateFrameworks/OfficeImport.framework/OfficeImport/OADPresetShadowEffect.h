@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setPresetShadowType:(int)a0;
- (int)presetShadowType;
- (id)equivalentOuterShadowEffect;

@end
