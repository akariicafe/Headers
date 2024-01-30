@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    BOOL mCategoryAxesReversed;
    BOOL mCategoryAxesReversedOverridden;
    BOOL mContainsVolumeStockType;
}

- (id)axes;
- (id)description;
- (void).cxx_destruct;
- (id)graphicProperties;
- (id)initWithChart:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setContainsVolumeStockType:(BOOL)a0;
- (id)chartTypes;
- (BOOL)hasSecondaryAxis;
- (BOOL)hasSecondaryYAxisDeleted;
- (void)markSecondaryAxes;
- (BOOL)containsVolumeStockType;
- (BOOL)isCategoryAxesReversed:(BOOL)a0;

@end
