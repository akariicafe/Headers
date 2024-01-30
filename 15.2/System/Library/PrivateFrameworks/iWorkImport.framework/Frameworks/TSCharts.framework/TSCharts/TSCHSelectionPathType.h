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

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 name:(id)a1;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)saveToArchive:(void *)a0;
- (BOOL)canApplyParagraphStyle;
- (BOOL)canApplyShapeStyle;
- (BOOL)canApplyChartStyleWithDescription:(id)a0;

@end
