@class TSUIntToIntDictionary, TSCHChartInfo;
@protocol TSCHNotifyOnModify;

@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying> {
    TSUIntToIntDictionary *mRemoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *mGridSeriesIndexForRemoteSeriesIndex;
}

@property (weak, nonatomic) TSCHChartInfo *chartInfo;
@property (weak, nonatomic) id<TSCHNotifyOnModify> objectToNotify;
@property (readonly, nonatomic) BOOL isPhantom;
@property (readonly, nonatomic) int direction;

+ (id)propertiesThatInvalidateMediator;

- (BOOL)isEditing;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (void)saveToArchive:(struct ChartMediatorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct Reference *x6; } *)a0;
- (void)willModify;
- (void)loadFromArchive:(const struct ChartMediatorArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct Reference *x6; } *)a0;
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
- (void)clearParent;
- (id)p_errorBarDataForSeries:(unsigned long long)a0 withSpec:(struct { unsigned long long x0; void /* function */ *x1; void *x2; })a1 updateType:(int)a2;

@end
