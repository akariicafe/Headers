@class NSString;

@interface UIFontMetrics : NSObject {
    NSString *_textStyle;
}

@property (class, readonly) UIFontMetrics *defaultMetrics;

+ (id)metricsForTextStyle:(id)a0;
+ (double)scaledValueForValue:(double)a0 withTextStyle:(id)a1 bodyLeading:(double)a2 compatibleWithTraitCollection:(id)a3;

- (id)scaledFontForFont:(id)a0 maximumPointSize:(double)a1 compatibleWithTraitCollection:(id)a2;
- (double)scaledValueForValue:(double)a0 compatibleWithTraitCollection:(id)a1;
- (id)scaledFontForFont:(id)a0 compatibleWithTraitCollection:(id)a1;
- (void).cxx_destruct;
- (double)scaledValueForValue:(double)a0;
- (id)init;
- (id)initForTextStyle:(id)a0;
- (id)ib_scaledFontForFont:(id)a0;
- (id)scaledFontForFont:(id)a0 maximumPointSize:(double)a1;
- (id)scaledFontForFont:(id)a0;
- (id)ib_scaledFontForFont:(id)a0 maximumPointSize:(double)a1;

@end
