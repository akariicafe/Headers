@class NSArray, NSDateInterval, NSDate, NSNumber;

@interface NTKHeartRateRichComplicationRectangularView : NTKRichComplicationRectangularDailyGraphView

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSArray *chartPoints;
@property (nonatomic) NSNumber *highBPM;
@property (nonatomic) NSNumber *lowBPM;
@property (retain, nonatomic) NSDate *measurementDate;
@property (retain, nonatomic) NSDateInterval *measurementDateDayInterval;

- (id)init;
- (void).cxx_destruct;
- (void)drawGraph:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_loadLockedState;
- (void)_loadNoDataState;
- (void)_loadWithMetadata:(id)a0;
- (void)_updateDailyLabel:(id)a0 withBPM:(id)a1;
- (double)_xValueForPointFromChartPoint:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_yValueForPointFromChartPointValue:(id)a0 betweenHigh:(id)a1 andLow:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)loadWithMetadata:(id)a0;

@end
