@class NSMutableArray;

@interface ISHintedValue : NSObject

@property (readonly) NSMutableArray *dimensions;
@property (readonly) NSMutableArray *values;
@property unsigned long long options;

- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)indexForSize:(struct CGSize { double x0; double x1; })a0;
- (id)hintedValueForIndex:(long long)a0;
- (void)addHintedValue:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)hintedValueForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)sizeOutsideHintedRange:(struct CGSize { double x0; double x1; })a0;
- (double)scaleFactorForSize:(struct CGSize { double x0; double x1; })a0;
- (double)interpolationFactorForSize:(struct CGSize { double x0; double x1; })a0;

@end
