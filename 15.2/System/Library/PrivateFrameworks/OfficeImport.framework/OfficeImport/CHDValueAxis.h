@interface CHDValueAxis : CHDAxis {
    BOOL mPercentageFormattingFlag;
    BOOL mAutoMajorUnitValue;
    BOOL mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
    int mBuiltInUnit;
    BOOL mShowBuiltInUnit;
}

- (id)initWithResources:(id)a0;
- (void)setMajorUnitValue:(double)a0;
- (void)setMinorUnitValue:(double)a0;
- (void)setScalingLogBase:(double)a0;
- (void)setBuiltInUnit:(int)a0;
- (void)setShowBuiltInUnitFlag:(BOOL)a0;
- (double)minorUnitValue;
- (BOOL)isAutoMinorUnitValue;
- (double)majorUnitValue;
- (BOOL)isAutoMajorUnitValue;
- (double)scalingLogBase;
- (void)adjustAxisPositionForHorizontalChart;
- (BOOL)isShowBuiltInUnit;
- (int)builtInUnit;
- (id)contentFormatWithBuiltInUnit;
- (void)setPercentageFormattingFlag:(BOOL)a0;
- (BOOL)isPercentageFormattingFlag;

@end
