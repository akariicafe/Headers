@interface TSCHTextureFillSet : TSCHFillSet

- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)a0;
- (id)fillForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1 context:(id)a2;
- (id)fillSetIdentifierForSeriesType:(id)a0 seriesIndex:(unsigned long long)a1;
- (id)fillsForDefaultSeriesType;
- (id)swatchFillsWithSwatchSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;

@end
