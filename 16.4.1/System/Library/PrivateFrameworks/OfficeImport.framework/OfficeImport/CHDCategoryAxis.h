@interface CHDCategoryAxis : CHDAxis {
    BOOL mAutomatic;
    BOOL mNoMultipleLevelLabel;
    int mLabelAlignment;
    long long mLabelFrequency;
    BOOL mLabelFrequencyAutomatic;
    BOOL mShowSeriesNames;
}

- (void)setLabelAlignment:(int)a0;
- (int)labelAlignment;
- (BOOL)isAutomatic;
- (id)initWithResources:(id)a0;
- (void)setAutomatic:(BOOL)a0;
- (void)adjustAxisPositionForHorizontalChart;
- (BOOL)isLabelFrequencyAutomatic;
- (BOOL)isNoMultipleLabellevel;
- (long long)labelFrequency;
- (void)setLabelFrequency:(long long)a0;
- (void)setNoMultipleLevelLabel:(BOOL)a0;
- (void)setShowSeriesLabels:(BOOL)a0;
- (BOOL)showSeriesLabels;

@end
