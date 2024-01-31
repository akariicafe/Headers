@interface AXNumericScale : AXScale

@property (nonatomic) double lowerBound;
@property (nonatomic) double upperBound;
@property (copy, nonatomic) id /* block */ apply;
@property (copy, nonatomic) id /* block */ invert;

+ (id)linearScaleWithLowerBound:(double)a0 upperBound:(double)a1;
+ (id)lnScaleWithLowerBound:(double)a0 upperBound:(double)a1;
+ (id)log10ScaleWithLowerBound:(double)a0 upperBound:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLowerBound:(double)a0 upperBound:(double)a1 apply:(id /* block */)a2 invert:(id /* block */)a3;

@end
