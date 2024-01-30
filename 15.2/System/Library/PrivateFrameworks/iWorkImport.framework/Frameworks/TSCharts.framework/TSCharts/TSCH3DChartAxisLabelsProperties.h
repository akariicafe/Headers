@class TSULRUCache, TSCH3DLabelResources, TSCHChartInfo, TSCHSelectionPath;

@interface TSCH3DChartAxisLabelsProperties : NSObject

@property (readonly, nonatomic) TSCH3DLabelResources *labels;
@property (readonly, nonatomic) TSCHChartInfo *info;
@property (readonly, nonatomic) unsigned long long styleIndex;
@property (retain, nonatomic) TSCHSelectionPath *selectionPath;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) TSULRUCache *categoryStridingCache;
@property (nonatomic) float cachedTextFactor;

+ (id)propertiesWithInfo:(id)a0 labels:(id)a1 styleIndex:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInfo:(id)a0 labels:(id)a1 styleIndex:(unsigned long long)a2;

@end
