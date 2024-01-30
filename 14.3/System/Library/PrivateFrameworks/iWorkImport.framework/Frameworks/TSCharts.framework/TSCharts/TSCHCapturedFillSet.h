@class NSArray;

@interface TSCHCapturedFillSet : TSCHFillSet {
    int _numberOfThemeSeriesStyles;
    NSArray *_seriesStyles;
}

+ (id)capturedFillSetWithIdentifier:(id)a0 seriesStyles:(id)a1 numberOfThemeSeriesStyles:(unsigned long long)a2;

- (void).cxx_destruct;
- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)a0;
- (id)fillForSeriesIndex:(unsigned long long)a0 seriesType:(id)a1 context:(id)a2;
- (id)initWithIdentifier:(id)a0 seriesStyles:(id)a1 numberOfThemeSeriesStyles:(unsigned long long)a2;

@end
