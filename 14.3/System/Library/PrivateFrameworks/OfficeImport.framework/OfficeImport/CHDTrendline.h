@class EDString, CHDTrendlineLabel, OADGraphicProperties;

@interface CHDTrendline : NSObject {
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (void)setName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (void)setLabel:(id)a0;
- (double)forward;
- (id)description;
- (int)type;
- (id)label;
- (id)name;
- (double)backward;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)a0;
- (BOOL)isDisplayEquation;
- (void)setDisplayEquation:(BOOL)a0;
- (BOOL)isDisplayRSquaredValue;
- (void)setDisplayRSquaredValue:(BOOL)a0;
- (void)setBackward:(double)a0;
- (void)setForward:(double)a0;
- (double)interceptYAxis;
- (void)setInterceptYAxis:(double)a0;
- (int)polynomialOrder;
- (void)setPolynomialOrder:(int)a0;
- (long long)movingAveragePeriod;
- (void)setMovingAveragePeriod:(long long)a0;
- (id)defaultNameWithSeriesName:(id)a0;

@end
