@class UIFont, HKElectrocardiogramAxisOptions, UIFontMetrics, UIColor, CAReplicatorLayer;

@interface HKElectrocardiogramAxisView : UIView

@property (retain, nonatomic) HKElectrocardiogramAxisOptions *options;
@property (retain, nonatomic) CAReplicatorLayer *ticksLayer;
@property (retain, nonatomic) UIFontMetrics *metrics;
@property (nonatomic) long long startingIndex;
@property (nonatomic) struct CGSize { double width; double height; } lastBoundsSize;
@property (readonly, nonatomic) UIFont *axisLabelFont;
@property (nonatomic) double axisSpacing;
@property (readonly, nonatomic) UIColor *lineColor;
@property (readonly, nonatomic) double lineWidth;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_createLabel;
- (id)initWithAxisSpacing:(double)a0 options:(id)a1 startingIndex:(long long)a2;
- (void)_drawAxis;
- (id)initWithAxisSpacing:(double)a0 lineColor:(id)a1 lineWidth:(double)a2;

@end
