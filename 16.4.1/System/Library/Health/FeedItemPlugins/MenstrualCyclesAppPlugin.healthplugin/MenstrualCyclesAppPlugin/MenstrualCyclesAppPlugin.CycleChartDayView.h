@class NSString;

@interface MenstrualCyclesAppPlugin.CycleChartDayView : MenstrualCyclesAppPlugin.CycleChart {
    void /* unknown type, empty encoding */ cycle;
    void /* unknown type, empty encoding */ dayIndex;
    void /* unknown type, empty encoding */ day;
    void /* unknown type, empty encoding */ dayProvider;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
