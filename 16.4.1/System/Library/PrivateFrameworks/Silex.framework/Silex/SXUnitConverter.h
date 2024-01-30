@interface SXUnitConverter : NSObject {
    double _componentWidth;
    double _parentWidth;
    double _documentGutter;
    double _documentMargin;
    double _contentScaleFactor;
    struct CGSize { double width; double height; } _viewportSize;
}

- (double)convertValueToPoints:(struct _SXConvertibleValue { double x0; unsigned long long x1; })a0;
- (double)convertValueToPoints:(struct _SXConvertibleValue { double x0; unsigned long long x1; })a0 allowNegativeValues:(BOOL)a1;
- (id)initWithComponentWidth:(double)a0 parentWidth:(double)a1 documentGutter:(double)a2 documentMargin:(double)a3 viewportSize:(struct CGSize { double x0; double x1; })a4 contentScaleFactor:(double)a5;

@end
