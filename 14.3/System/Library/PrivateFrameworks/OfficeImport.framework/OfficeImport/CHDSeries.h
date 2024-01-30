@class NSString, CHDChartType, CHDData, OADGraphicProperties, CHDFormula, CHDErrorBar, CHDDataLabel, CHDDataValue, CHDChart, EDKeyedCollection, EDCollection;

@interface CHDSeries : NSObject <EDKeyedObject> {
    CHDChart *mChart;
    CHDChartType *mChartType;
    unsigned long long mOrder;
    unsigned long long mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    BOOL mDateTimeFormattingFlag;
    BOOL mHiddenFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)seriesWithChart:(id)a0;

- (void)setName:(id)a0;
- (id)valueData;
- (BOOL)isEmpty;
- (void)setOrder:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)chart;
- (long long)key;
- (id)name;
- (BOOL)isHidden;
- (unsigned long long)order;
- (id)chartType;
- (void)setChartType:(id)a0;
- (unsigned long long)categoryCount;
- (void)setValueData:(id)a0;
- (id)shallowCopy;
- (id)graphicProperties;
- (id)lastCachedName;
- (id)categoryData;
- (BOOL)isDateTimeFormattingFlag;
- (id)dataValuePropertiesCollection;
- (id)defaultDataLabel;
- (id)errorBarYAxis;
- (id)initWithChart:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setLastCachedName:(id)a0;
- (void)setDateTimeFormattingFlag:(BOOL)a0;
- (void)setStyleIndex:(unsigned long long)a0;
- (void)setDefaultDataLabel:(id)a0;
- (void)setErrorBarYAxis:(id)a0;
- (void)setErrorBarXAxis:(id)a0;
- (void)clearBackPointers;
- (unsigned long long)styleIndex;
- (void)setCategoryData:(id)a0;
- (void)setDataValuePropertiesCollection:(id)a0;
- (id)trendlineCollection;
- (void)setTrendlineCollection:(id)a0;
- (BOOL)hasTrendlines;
- (void)setErrorBar:(id)a0;
- (BOOL)hasErrorBars;
- (id)errorBarXAxis;
- (void)setHiddenFlag:(BOOL)a0;
- (id)defaultSeriesNameForIndex:(unsigned long long)a0;

@end
