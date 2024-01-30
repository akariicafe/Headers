@class HKUnitPreferenceController, HKFillStyle, HKDisplayTypeController;
@protocol HKActivityBarSeriesDelegate;

@interface _ActivityBarSeries : HKBarSeries

@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (retain, nonatomic) HKFillStyle *missedGoalUnselectedFillStyle;
@property (weak, nonatomic) id<HKActivityBarSeriesDelegate> activityBarDelegate;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (nonatomic) long long activityDisplayTypeIdentifier;
@property (nonatomic) double lastLegendUpdateTime;

- (void).cxx_destruct;
- (BOOL)supportsMultiTouchSelection;
- (void)_drawPath:(id)a0 withFillStyle:(id)a1 strokeStyle:(id)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;
- (void)drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 seriesRenderingDelegate:(id)a5;
- (id)initWithUnitPreferenceController:(id)a0 activityBarDelegate:(id)a1 displayTypeController:(id)a2;
- (void)updateLegendsForTimeScope:(long long)a0 range:(id)a1 drawingDuringScrolling:(BOOL)a2;

@end
