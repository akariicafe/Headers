@interface EFLinearFunction : NSObject

@property (nonatomic) double slope;
@property (nonatomic) double intercept;

- (double)evaluateX:(double)a0;
- (id)initWithSlope:(double)a0 intercept:(double)a1;
- (id)initWithLineThroughPoints:(id)a0;
- (double)evaluateReverse:(double)a0;

@end
