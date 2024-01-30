@interface MFPColorCurveEffect : MFPEffect {
    int mAdjustment;
    int mChannel;
    int mAdjustValue;
}

+ (id)GUID;

- (id)initWithAdjustment:(int)a0 channel:(int)a1 adjustValue:(int)a2;

@end
