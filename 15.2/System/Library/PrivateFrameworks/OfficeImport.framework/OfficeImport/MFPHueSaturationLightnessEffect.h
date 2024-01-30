@interface MFPHueSaturationLightnessEffect : MFPEffect {
    int mHueChange;
    int mSaturationChange;
    int mLightnessChange;
}

+ (id)GUID;

- (id)initWithHueChange:(int)a0 saturationChange:(int)a1 lightnessChange:(int)a2;

@end
