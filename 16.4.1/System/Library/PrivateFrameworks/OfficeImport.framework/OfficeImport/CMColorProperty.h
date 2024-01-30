@class OITSUColor;

@interface CMColorProperty : CMProperty {
    OITSUColor *wdValue;
}

+ (struct CGColor { } *)copyCGColorFromOADColor:(id)a0 state:(id)a1;
+ (struct CGColor { } *)copyCGColorFromOADFill:(id)a0 state:(id)a1;
+ (id)cssStringFromOADColor:(id)a0;
+ (id)cssStringFromOADGradientFill:(id)a0 state:(id)a1;
+ (id)cssStringFromRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)cssStringFromTSUColor:(id)a0;
+ (id)nsColorFromOADColor:(id)a0 state:(id)a1;
+ (id)nsColorFromOADFill:(id)a0 state:(id)a1;
+ (id)nsColorFromShading:(id)a0;
+ (float)resolveColorValueWithPercentage:(float)a0 foregroundComponent:(float)a1 backgroundComponent:(float)a2;
+ (id)resolveStyleColorWithPercentage:(float)a0 foregroundColor:(id)a1 backgroundColor:(id)a2;
+ (id)resolveStyleColorWithPercentage:(float)a0 shading:(id)a1;
+ (float)transformedAlphaFromOADColor:(id)a0;

- (BOOL)isEqualTo:(id)a0;
- (id)initWithColor:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (id)cssString;
- (id)cssStringForName:(id)a0;

@end
