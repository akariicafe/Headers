@class NSArray, HKDisplayType;

@interface HKAppleWalkingSteadinessAxis : HKNumericAxis

@property (retain, nonatomic) NSArray *cachedAxisLabels;
@property (retain, nonatomic) HKDisplayType *displayType;

+ (id)standardAxisWithDisplayType:(id)a0;

- (id)initWithDisplayType:(id)a0;
- (void).cxx_destruct;
- (id)_axisLabelsForClassificationsWithDisplayType:(id)a0;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (struct CGPoint { double x0; double x1; })renderPositionForLabelLocation:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 constantOffset:(double)a4 isHorizontal:(BOOL)a5 optionalOffset:(struct CGPoint { double x0; double x1; })a6;

@end
