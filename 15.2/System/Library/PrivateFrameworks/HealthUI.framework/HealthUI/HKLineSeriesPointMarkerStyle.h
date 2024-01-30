@class UIColor;

@interface HKLineSeriesPointMarkerStyle : NSObject

@property (retain, nonatomic) UIColor *pointColor;
@property (nonatomic) double radius;
@property (nonatomic) long long pointMarkerStyle;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 radius:(double)a1 style:(long long)a2;

@end
