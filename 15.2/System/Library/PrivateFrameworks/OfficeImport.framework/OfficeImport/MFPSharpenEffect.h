@interface MFPSharpenEffect : MFPEffect {
    float mAmount;
    float mRadius;
}

+ (id)GUID;

- (id)initWithAmount:(float)a0 radius:(float)a1;

@end
