@class NSString, NSDate;

@interface HealthVisualization.HighlightCalendarDayView : UIView {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ dayLabel;
    void /* unknown type, empty encoding */ todayIndicatorLayer;
    void /* unknown type, empty encoding */ ringsRenderer;
    void /* unknown type, empty encoding */ activityRingsView;
}

@property (nonatomic, readonly) NSDate *axDate;
@property (nonatomic, readonly) long long axProbability;
@property (nonatomic, readonly) NSString *axProjectionKind;
@property (nonatomic, readonly) long long axCircleState;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
