@class NSArray;

@interface NTKFloatCurve : NSObject {
    NSArray *_valueCurveElements;
}

- (void).cxx_destruct;
- (id)initWithFloatCurveElements:(id)a0;
- (double)floatValueForFraction:(double)a0;

@end
