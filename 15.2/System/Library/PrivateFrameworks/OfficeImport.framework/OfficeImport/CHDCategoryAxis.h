@interface CHDCategoryAxis : CHDAxis {
    BOOL mAutomatic;
    BOOL mNoMultipleLevelLabel;
    int mLabelAlignment;
    long long mLabelFrequency;
    BOOL mLabelFrequencyAutomatic;
    BOOL mShowSeriesNames;
}

- (id)initWithResources:(id)a0;
- (BOOL)isAutomatic;
- (void)setAutomatic:(BOOL)a0;
- (int)labelAlignment;
- (void)setLabelAlignment:(int)a0;
- (void)setLabelFrequency:(long long)a0;
- (long long)labelFrequency;
- (void)adjustAxisPositionForHorizontalChart;
- (BOOL)isNoMultipleLabellevel;
- (void)setNoMultipleLevelLabel:(BOOL)a0;
- (void)setShowSeriesLabels:(BOOL)a0;
- (BOOL)showSeriesLabels;
- (BOOL)isLabelFrequencyAutomatic;

@end
