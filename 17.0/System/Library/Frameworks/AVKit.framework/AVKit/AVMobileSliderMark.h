@class UIColor;

@interface AVMobileSliderMark : NSObject

@property (readonly, nonatomic) float startValue;
@property (readonly, nonatomic) float endValue;
@property (readonly, nonatomic) UIColor *filledColor;
@property (readonly, nonatomic) UIColor *unfilledColor;
@property (readonly, nonatomic) unsigned long long markType;

+ (id)interstitialMarkAtValue:(float)a0;
+ (id)liveEdgeMarkAtValue:(float)a0;

- (void).cxx_destruct;
- (id)initWithStartValue:(float)a0 endValue:(float)a1 filledColor:(id)a2 unfilledColor:(id)a3 markWithType:(unsigned long long)a4;

@end
