@class NSString;

@interface TSCHSelectionPathType : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;

+ (id)seriesType;
+ (id)axisLabelsType;
+ (id)referenceLineValueLabelType;
+ (id)referenceLineLabelType;
+ (id)chartTitleType;
+ (id)seriesLabelType;
+ (id)chartDataSetNameType;
+ (id)chartBodyType;
+ (id)axisLineType;
+ (id)legendSeriesNameType;
+ (id)legendTrendLineNameType;
+ (id)legendType;
+ (id)axisTitleType;
+ (id)valueAxisType;
+ (id)categoryAxisType;
+ (id)gridLineType;
+ (id)seriesValueLabelType;
+ (id)seriesSymbolType;
+ (id)errorBarType;
+ (id)trendLineType;
+ (id)trendLineEquationType;
+ (id)trendLineR2Type;
+ (id)referenceLineType;
+ (id)seriesEditModeType;
+ (id)selectionPathTypeWithType:(id)a0 name:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct ChartSelectionPathTypeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; } *)a0;
- (id)initWithType:(id)a0 name:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct ChartSelectionPathTypeArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; } *)a0;
- (BOOL)canApplyParagraphStyle;
- (BOOL)canApplyShapeStyle;
- (BOOL)canApplyChartStyleWithDescription:(id)a0;

@end
