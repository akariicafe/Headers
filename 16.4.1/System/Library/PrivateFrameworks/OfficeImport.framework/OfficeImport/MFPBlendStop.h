@interface MFPBlendStop : NSObject {
    float mFactor;
    float mPosition;
}

- (float)position;
- (float)factor;
- (id)initWithFactor:(float)a0 position:(float)a1;

@end
