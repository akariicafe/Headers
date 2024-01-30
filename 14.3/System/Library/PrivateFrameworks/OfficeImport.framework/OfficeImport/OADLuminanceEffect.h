@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (void)setContrast:(float)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)contrast;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)brightness;
- (void)setBrightness:(float)a0;

@end
