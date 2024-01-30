@class UIColor, CAMediaTimingFunction;

@interface NTKColorCurveElement : NSObject

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) float fraction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (id)description;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 fraction:(float)a1;

@end
