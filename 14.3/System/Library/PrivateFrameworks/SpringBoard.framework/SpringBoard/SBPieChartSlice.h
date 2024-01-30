@class UIColor;

@interface SBPieChartSlice : NSObject

@property (readonly) double value;
@property (readonly) UIColor *fillColor;

+ (id)sliceWithValue:(double)a0 fillColor:(id)a1;

- (void).cxx_destruct;
- (id)initWithValue:(double)a0 fillColor:(id)a1;

@end
