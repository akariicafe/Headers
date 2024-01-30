@class NSString;

@interface HKNumericAxisZeroOnly : HKNumericAxis

@property (readonly, nonatomic) NSString *zeroLabel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (id)initWithZeroLabel:(id)a0;

@end
