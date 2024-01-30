@class CHDData, CHDChart, OADGraphicProperties;

@interface CHDErrorBar : NSObject {
    CHDChart *mChart;
    double mValue;
    int mType;
    int mValueType;
    int mDirection;
    BOOL mNoEndCap;
    CHDData *mMinusValues;
    CHDData *mPlusValues;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)errorBarWithChart:(id)a0;

- (int)valueType;
- (void)setDirection:(int)a0;
- (void).cxx_destruct;
- (void)setValueType:(int)a0;
- (int)direction;
- (void)setType:(int)a0;
- (double)value;
- (id)description;
- (int)type;
- (void)setValue:(double)a0;
- (id)graphicProperties;
- (id)initWithChart:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setNoEndCap:(BOOL)a0;
- (void)setPlusValues:(id)a0;
- (void)setMinusValues:(id)a0;
- (BOOL)isNoEndCap;
- (id)minusValues;
- (id)plusValues;

@end
