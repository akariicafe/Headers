@class UIColor, CAMediaTimingFunction;

@interface NTKColorCurveElement : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) float fraction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (id)description;
- (id)initWithColor:(id)a0 fraction:(float)a1;

@end
