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

- (void)setValueData:(id)a0;
- (id)valueData;
- (unsigned long long)order;
- (unsigned long long)categoryCount;
- (id)shallowCopy;
- (void)setName:(id)a0;
- (id)chart;
- (long long)key;
- (void)setOrder:(unsigned long long)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isHidden;
- (id)chartType;
- (void)setChartType:(id)a0;
- (id)graphicProperties;
- (id)initWithChart:(id)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setLastCachedName:(id)a0;
- (BOOL)isDateTimeFormattingFlag;
- (void)setDateTimeFormattingFlag:(BOOL)a0;
- (id)defaultDataLabel;
- (id)dataValuePropertiesCollection;
- (void)setStyleIndex:(unsigned long long)a0;
- (void)setDefaultDataLabel:(id)a0;
- (void)setErrorBarYAxis:(id)a0;
- (void)setErrorBarXAxis:(id)a0;
- (void)clearBackPointers;
- (unsigned long long)styleIndex;
- (id)lastCachedName;
- (id)categoryData;
- (void)setCategoryData:(id)a0;
- (void)setDataValuePropertiesCollection:(id)a0;
- (id)trendlineCollection;
- (void)setTrendlineCollection:(id)a0;
- (BOOL)hasTrendlines;
- (void)setErrorBar:(id)a0;
- (BOOL)hasErrorBars;
- (id)errorBarXAxis;
- (id)errorBarYAxis;
- (void)setHiddenFlag:(BOOL)a0;
- (id)defaultSeriesNameForIndex:(unsigned long long)a0;

@end
