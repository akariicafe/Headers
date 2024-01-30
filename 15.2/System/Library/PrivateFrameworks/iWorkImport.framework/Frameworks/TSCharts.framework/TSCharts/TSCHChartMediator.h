@class TSUIntToIntDictionary, TSCHChartInfo;
@protocol TSCHNotifyOnModify;

@interface TSCHChartMediator : NSObject <NSCopying> {
    TSUIntToIntDictionary *_remoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *_gridSeriesIndexForRemoteSeriesIndex;
}

@property (weak, nonatomic) TSCHChartInfo *chartInfo;
@property (weak, nonatomic) id<TSCHNotifyOnModify> objectToNotify;
@property (readonly, nonatomic) BOOL isPhantom;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) unsigned long long referenceType;

+ (id)propertiesThatInvalidateMediator;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEditing;
- (id)copyWithContext:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void)willModify;
- (void)loadFromArchive:(const void *)a0;
- (id)initWithChartInfo:(id)a0;
- (BOOL)preferSeriesToValues;
- (unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)a0;
- (unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)a0;
- (void)updateGridWithSpec:(struct { unsigned long long x0; void /* function */ *x1; void *x2; })a0;
- (void)pauseCalculationEngine;
- (void)resumeCalculationEngine;
- (void)invalidateAndSynchronizeMediator;
- (id)commandToSetChartGridDirection:(int)a0 documentRoot:(id)a1;
- (id)categoryLabelFormulas;
- (id)commandToChangeCategoryLabelFormulas:(id)a0;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)a0 dataType:(int)a1;
- (id)commandToSetErrorBarCustomFormula:(id)a0 seriesIndex:(unsigned long long)a1 dataType:(int)a2;
- (id)commandToSetSeriesDataFormula:(id)a0 seriesDimension:(id)a1;
- (id)seriesDataFormulaForSeriesDimension:(id)a0;
- (BOOL)hasCategoryReferences;
- (BOOL)hasTractReference;
- (id)commandSetSeriesName:(id)a0 forSeriesIndex:(unsigned long long)a1;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)a0;
- (id)commandToSetSeriesNameFormula:(id)a0 seriesIndex:(unsigned long long)a1;
- (id)commandSetCategoryName:(id)a0 forCategoryIndex:(unsigned long long)a1;
- (id)commandToSetNewSeriesIndex:(unsigned long long)a0 forSeriesIndex:(unsigned long long)a1;
- (id)dataFormatterForAxis:(id)a0 documentRoot:(id)a1;
- (id)dataFormatterForSeries:(id)a0 index:(unsigned long long)a1 axisType:(int)a2 documentRoot:(id)a3;
- (id)p_errorBarDataForSeries:(unsigned long long)a0 withSpec:(struct { unsigned long long x0; void /* function */ *x1; void *x2; })a1 updateType:(int)a2;

@end
