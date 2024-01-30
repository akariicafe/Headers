@class MTAlarm, UILayoutGuide, MTUIBedtimeGraphData, NSArray, NSLayoutConstraint, NSMutableArray, UITapGestureRecognizer;

@interface MTUIBedtimeGraphView : UIView

@property (retain, nonatomic) MTUIBedtimeGraphData *graphData;
@property (retain, nonatomic) NSMutableArray *orderedGraphColumns;
@property (retain, nonatomic) UILayoutGuide *axesLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *topAxisConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomAxisConstraint;
@property (retain, nonatomic) NSArray *dayLabels;
@property (retain, nonatomic) NSArray *labelTitles;
@property (retain, nonatomic) NSArray *dayCenterXConstraints;
@property (retain, nonatomic) NSLayoutConstraint *labelBaselineConstraint;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic) unsigned long long graphStyle;
@property (readonly, nonatomic) double bedtimeOriginY;
@property (readonly, nonatomic) double wakeTimeOriginY;
@property (copy, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSArray *sleepData;

- (id)viewForLastBaselineLayout;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 graphStyle:(unsigned long long)a1;
- (void)graphTapped:(id)a0;
- (void)_updateLabelTitles;
- (double)barOriginXForBarAtIndex:(unsigned long long)a0 outOfCount:(unsigned long long)a1 shouldChangeForRTL:(BOOL)a2;
- (void)processSleepData;

@end
