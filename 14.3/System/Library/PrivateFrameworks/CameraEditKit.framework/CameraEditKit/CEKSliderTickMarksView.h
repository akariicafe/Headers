@class UIColor, NSString;
@protocol CEKSliderTickMarksDelegate;

@interface CEKSliderTickMarksView : UIView <CEKTickMarksConfiguration>

@property (weak, nonatomic) id<CEKSliderTickMarksDelegate> delegate;
@property (nonatomic) double tickMarkWidth;
@property (readonly, nonatomic) long long tickMarksCount;
@property (nonatomic) long long mainTickMarkInterval;
@property (nonatomic) double tickMarkSpacing;
@property (nonatomic) long long mainTickMarkOffset;
@property (nonatomic) BOOL useTickMarkLegibilityShadows;
@property (retain, nonatomic) UIColor *mainTickMarkColor;
@property (retain, nonatomic) UIColor *secondaryTickMarkColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_colorForMainTickMarks;
- (id)_colorForSecondaryTickMarks;
- (BOOL)isMainTickMarkIndex:(long long)a0;
- (double)xOffsetForTickMarkIndex:(long long)a0;
- (double)widthForTickMarkCount:(unsigned long long)a0;
- (long long)floorTickMarkIndexForXOffset:(double)a0;

@end
