@class TSCHLegendStyle, NSArray, TSCHReferenceLineStyle, TSCHChartNonStyle, NSMutableDictionary, NSDictionary, NSMutableArray, TSCHChartStyle, TSCHLegendNonStyle;

@interface TSCHPropertyValueStorageContainer : NSObject {
    NSMutableArray *_valueAxisStyles;
    NSMutableArray *_valueAxisNonStyles;
    NSMutableArray *_categoryAxisStyles;
    NSMutableArray *_categoryAxisNonStyles;
    NSMutableArray *_seriesThemeStyles;
    NSMutableArray *_seriesPrivateStyles;
    NSMutableArray *_seriesNonStyles;
    NSMutableArray *_paragraphStyles;
    NSMutableDictionary *_referenceLineStyles;
    NSMutableDictionary *_referenceLineNonStyles;
}

@property (retain, nonatomic) TSCHChartStyle *chartStyle;
@property (retain, nonatomic) TSCHChartNonStyle *chartNonStyle;
@property (retain, nonatomic) TSCHLegendStyle *legendStyle;
@property (retain, nonatomic) TSCHLegendNonStyle *legendNonStyle;
@property (copy, nonatomic) NSArray *valueAxisStyles;
@property (copy, nonatomic) NSArray *valueAxisNonStyles;
@property (copy, nonatomic) NSArray *categoryAxisStyles;
@property (copy, nonatomic) NSArray *categoryAxisNonStyles;
@property (copy, nonatomic) NSArray *seriesThemeStyles;
@property (copy, nonatomic) NSArray *seriesPrivateStyles;
@property (copy, nonatomic) NSArray *seriesNonStyles;
@property (copy, nonatomic) NSArray *paragraphStyles;
@property (retain, nonatomic) TSCHReferenceLineStyle *referenceLineThemeStyle;
@property (copy, nonatomic) NSDictionary *referenceLineStyles;
@property (copy, nonatomic) NSDictionary *referenceLineNonStyles;

- (void).cxx_destruct;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
