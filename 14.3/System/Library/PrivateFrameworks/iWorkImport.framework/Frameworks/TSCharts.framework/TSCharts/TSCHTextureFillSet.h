@interface TSCHTextureFillSet : TSCHFillSet

- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)a0;
- (id)fillForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1 context:(id)a2;
- (id)swatchFills;
- (id)fillsForDefaultSeriesType;
- (id)fillSetIdentifierForSeriesType:(id)a0 seriesIndex:(unsigned long long)a1;

@end
