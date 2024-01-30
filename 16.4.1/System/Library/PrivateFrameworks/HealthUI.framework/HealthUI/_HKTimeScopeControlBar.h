@class UISegmentedControl;

@interface _HKTimeScopeControlBar : HKTimeScopeControl {
    UISegmentedControl *_segments;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setSelectedTimeScope:(long long)a0;
- (void)_segmentValueChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 timeScopes:(id)a1 shortTextStyle:(BOOL)a2;
- (long long)selectedTimeScope;

@end
