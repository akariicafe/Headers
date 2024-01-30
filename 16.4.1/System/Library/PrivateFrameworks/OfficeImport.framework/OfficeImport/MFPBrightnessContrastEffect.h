@interface MFPBrightnessContrastEffect : MFPEffect {
    int mBrightness;
    int mContrast;
}

+ (id)GUID;

- (id)initWithBrightness:(int)a0 contrast:(int)a1;

@end
