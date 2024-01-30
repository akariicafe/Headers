@interface CHPValueAxisFormatting : EDProcessor

- (BOOL)isObjectSupported:(id)a0;
- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (BOOL)isPercentageFormattingInContentFormatString:(id)a0 edValue:(struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } *)a1;
- (id)dataPointFormattingInSeriesCollection:(id)a0;
- (id)dataPointFormattingInData:(id)a0;
- (id)dataPointFormattingInSources:(id)a0;

@end
