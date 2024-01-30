@interface EFLinearFunction : NSObject

@property (nonatomic) double slope;
@property (nonatomic) double intercept;

- (id)initWithSlope:(double)a0 intercept:(double)a1;
- (id)initWithLineThroughPoints:(id)a0;
- (double)evaluateX:(double)a0;
- (double)evaluateReverse:(double)a0;

@end
