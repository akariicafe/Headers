@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (void)setBrightness:(float)a0;
- (float)brightness;
- (void)setContrast:(float)a0;
- (float)contrast;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
