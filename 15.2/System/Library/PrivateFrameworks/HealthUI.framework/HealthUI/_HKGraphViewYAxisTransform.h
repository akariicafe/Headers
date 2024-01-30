@class NSArray, HKAxis, HKValueRange;

@interface _HKGraphViewYAxisTransform : NSObject

@property (readonly, nonatomic) HKAxis *yAxisForTransform;
@property (readonly, nonatomic) NSArray *seriesForTransform;
@property (readonly, nonatomic) struct HKLinearTransform { double offset; double scale; } startingTransform;
@property (readonly, nonatomic) struct HKLinearTransform { double offset; double scale; } endingTransform;
@property (readonly, nonatomic) HKValueRange *endingRange;

- (void).cxx_destruct;
- (id)initWithYAxis:(id)a0 seriesForTransform:(id)a1 startingTransform:(struct HKLinearTransform { double x0; double x1; })a2 endingTransform:(struct HKLinearTransform { double x0; double x1; })a3 endingRange:(id)a4;

@end
