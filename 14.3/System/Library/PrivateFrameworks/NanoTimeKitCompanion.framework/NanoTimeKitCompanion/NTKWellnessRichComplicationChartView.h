@class UIColor, NSArray, NSDictionary, NSDateFormatter, UILabel, NSNumber, CLKDevice;

@interface NTKWellnessRichComplicationChartView : UIView {
    CLKDevice *_device;
    NSDictionary *_moveChartPoints;
    NSNumber *_maxMoveValue;
    NSDictionary *_exerciseChartPoints;
    NSNumber *_maxExerciseValue;
    NSDictionary *_standChartPoints;
    UIColor *_chartLineColor;
    double _moveChartBottomLineY;
    double _exerciseChartBottomLineY;
    double _standChartBottomLineY;
    NSArray *_chartLineXPositions;
    struct CGGradient { } *_moveBarGradient;
    UIColor *_moveBarFadedColor;
    struct CGGradient { } *_exerciseBarGradient;
    UIColor *_exerciseBarFadedColor;
    struct CGGradient { } *_standBarGradient;
    NSDateFormatter *_hourFormatter;
    UILabel *_midnightHourLabel;
    UILabel *_sixAMHourLabel;
    UILabel *_noonHourLabel;
    UILabel *_sixPMHourLabel;
}

- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initForDevice:(id)a0;
- (void)_createHourFormatter;
- (void)_updateHourLabelsText;
- (id)_timeStringByRemovingSpacesFromTimeString:(id)a0;
- (void)_currentLocaleChangeOccurred;
- (id)_generateChartPointsForQuantityStatisticsInfo:(id)a0 withUnit:(id)a1 accumulateFractionalValues:(BOOL)a2;
- (id)_generateStandChartPointsForStandHourInfo:(id)a0;
- (id)_keyForDate:(id)a0;
- (void)_drawChartsBarsInContext:(struct CGContext { } *)a0 lineNumber:(unsigned long long)a1 xPosition:(double)a2;
- (double)_movePointRelativeHeightForValue:(double)a0;
- (double)_exercisePointRelativeHeightForValue:(double)a0;
- (void)setMoveGraphData:(id)a0 activityMoveMode:(long long)a1;
- (void)setExerciseGraphData:(id)a0;
- (void)setStandGraphData:(id)a0;

@end
