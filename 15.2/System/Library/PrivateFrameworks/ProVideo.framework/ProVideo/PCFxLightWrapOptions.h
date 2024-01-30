@interface PCFxLightWrapOptions : PCFxBlendOptions <NSCopying> {
    float _amount;
    float _intensity;
    float _lrOpacity;
    int _lrMode;
}

- (void)setOpacity:(float)a0;
- (void)setAmount:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIntensity:(float)a0;
- (void)setLRBlendMode:(int)a0;
- (float)getAmount;
- (float)getIntensity;
- (float)getOpacity;
- (int)getLRBlendMode;
- (id)initWithLRBlendOptions:(id)a0;

@end
