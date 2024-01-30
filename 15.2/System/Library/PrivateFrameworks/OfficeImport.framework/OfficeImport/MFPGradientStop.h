@class OITSUColor;

@interface MFPGradientStop : NSObject {
    OITSUColor *mColor;
    float mPosition;
}

- (float)position;
- (id)color;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 position:(float)a1;

@end
