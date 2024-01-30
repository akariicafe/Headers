@interface CHDDateAxis : CHDAxis {
    BOOL mAutomatic;
    double mMajorUnitValue;
    double mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}

- (id)initWithResources:(id)a0;
- (void)setAutomatic:(BOOL)a0;
- (BOOL)isAutomatic;
- (BOOL)isDate;
- (void)setMajorUnitValue:(double)a0;
- (void)setMinorUnitValue:(double)a0;
- (double)minorUnitValue;
- (double)majorUnitValue;
- (int)majorTimeUnit;
- (void)setMajorTimeUnit:(int)a0;
- (int)minorTimeUnit;
- (void)setMinorTimeUnit:(int)a0;
- (int)baseTimeUnit;
- (void)setBaseTimeUnit:(int)a0;

@end
