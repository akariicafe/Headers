@class UIColor, NSString, PRPosterColorHSLValues, PRPosterColorHSBValues;

@interface PRPosterColorValues : NSObject

@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PRPosterColorHSBValues *hsbValues;
@property (retain, nonatomic) PRPosterColorHSLValues *hslValues;
@property (nonatomic) double alpha;

- (id)initWithHue:(double)a0 saturation:(double)a1 luminance:(double)a2 alpha:(double)a3;
- (id)initWithColor:(id)a0 hsbValues:(id)a1 hslValues:(id)a2 alpha:(double)a3;
- (id)initWithColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
