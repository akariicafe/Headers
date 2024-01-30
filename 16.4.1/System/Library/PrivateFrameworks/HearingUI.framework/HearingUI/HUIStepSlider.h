@class UIColor, NSMutableArray;

@interface HUIStepSlider : UISlider

@property (retain, nonatomic) NSMutableArray *ticks;
@property (nonatomic) unsigned long long segmentCount;
@property (nonatomic) BOOL restrictsValuesToTicks;
@property (nonatomic) BOOL supportsVibrancy;
@property (nonatomic) BOOL drawsEndTicks;
@property (retain, nonatomic) UIColor *tickColor;

- (void)setValue:(float)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)a0;
- (void)sliderTapped:(id)a0;

@end
