@class WUIGradient;

@interface WUITimeOfDayGradientProvider : NSObject

@property (retain, nonatomic) WUIGradient *midnightGradient;
@property (retain, nonatomic) WUIGradient *sunupdownGradient;
@property (retain, nonatomic) WUIGradient *morningeveningGradient;
@property (retain, nonatomic) WUIGradient *noonGradient;

- (void).cxx_destruct;
- (void)_gradientColors;
- (id)_mixedGradientWithFirstGradient:(id)a0 andGradient:(id)a1 factor:(double)a2;
- (id)gradientColorsForTime:(double)a0 sunrise:(double)a1 sunset:(double)a2;
- (BOOL)isDate:(id)a0 inRangeFirstDate:(id)a1 lastDate:(id)a2;

@end
