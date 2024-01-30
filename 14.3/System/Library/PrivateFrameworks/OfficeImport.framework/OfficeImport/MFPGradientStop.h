@class OITSUColor;

@interface MFPGradientStop : NSObject {
    OITSUColor *mColor;
    float mPosition;
}

- (float)position;
- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)a0 position:(float)a1;

@end
