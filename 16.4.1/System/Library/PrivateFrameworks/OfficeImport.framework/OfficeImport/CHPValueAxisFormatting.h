@interface CHPValueAxisFormatting : EDProcessor

- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (id)dataPointFormattingInData:(id)a0;
- (id)dataPointFormattingInSeriesCollection:(id)a0;
- (id)dataPointFormattingInSources:(id)a0;
- (BOOL)isObjectSupported:(id)a0;
- (BOOL)isPercentageFormattingInContentFormatString:(id)a0 edValue:(struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } *)a1;

@end
