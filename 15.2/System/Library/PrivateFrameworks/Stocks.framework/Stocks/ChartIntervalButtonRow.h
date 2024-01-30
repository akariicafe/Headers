@class NSArray, ChartIntervalButton;
@protocol ChartIntervalButtonRowDelegate;

@interface ChartIntervalButtonRow : UIView

@property (weak, nonatomic) id<ChartIntervalButtonRowDelegate> delegate;
@property (retain, nonatomic) NSArray *intervalButtons;
@property (weak, nonatomic) ChartIntervalButton *selectedButton;
@property (nonatomic) long long maxChartInterval;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)sizeToBoldLabels;
- (void)intervalButtonsTapped:(id)a0;
- (long long)intervalForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)selectChartIntervalButtonForInterval:(long long)a0;
- (id)initWithMaxChartInterval:(long long)a0 chartIntervalButtonRowDelegate:(id)a1;
- (void)updateMaxChartInterval:(long long)a0;

@end
