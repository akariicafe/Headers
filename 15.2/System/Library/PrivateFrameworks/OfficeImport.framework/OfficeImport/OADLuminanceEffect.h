@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (float)contrast;
- (void)setContrast:(float)a0;
- (float)brightness;
- (void)setBrightness:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
