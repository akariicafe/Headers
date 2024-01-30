@class TSCHLegendStyle, NSArray, TSCHReferenceLineStyle, TSURetainedPointerKeyDictionary, NSMutableDictionary, NSDictionary, NSMutableArray, TSCHChartStyle, TSSStylesheet;

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>

@property (retain, nonatomic) TSCHChartStyle *chartStyle;
@property (retain, nonatomic) TSCHLegendStyle *legendStyle;
@property (copy, nonatomic) NSMutableArray *valueAxisStyles;
@property (copy, nonatomic) NSMutableArray *categoryAxisStyles;
@property (copy, nonatomic) NSMutableArray *seriesThemeStyles;
@property (copy, nonatomic) NSMutableArray *seriesPrivateStyles;
@property (copy, nonatomic) NSMutableArray *paragraphStyles;
@property (copy, nonatomic) NSMutableDictionary *referenceLineStyles;
@property (retain, nonatomic) TSCHReferenceLineStyle *referenceLineThemeStyle;
@property (retain, nonatomic) TSCHChartStyleState *themeChartStyleState;
@property (readonly, nonatomic) TSCHChartStyleState *stateForParentStyleLookup;
@property (readonly, copy, nonatomic) NSArray *allStyles;
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (readonly, nonatomic) BOOL paragraphStyleIndexesAreValid;
@property (readonly, copy, nonatomic) NSDictionary *semanticTagToStyleMap;
@property (readonly, nonatomic) TSURetainedPointerKeyDictionary *styleToSemanticTagsMap;

+ (id)styleState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)paragraphStyles;
- (id)valueAxisStyles;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (id)legendStyle;
- (void)replaceStylesUsingBlock:(id /* block */)a0;
- (void)setLegendStyle:(id)a0;
- (id)applyStyleSwapTuple:(id)a0;
- (id)applyStyleSwapTuple:(id)a0 ignoringBeforeValues:(BOOL)a1;
- (void)checkParagraphStyleIndicies;
- (void)enumerateSemanticTagsAndUsagesWithPropertySetType:(long long)a0 usingBlock:(id /* block */)a1;
- (id)fallbackSemanticTagForSemanticTag:(id)a0;
- (id)fallbackSemanticUsageForSemanticUsage:(id)a0;
- (id)listOfStyles;
- (BOOL)otherStateIsEquivalent:(id)a0 ignoringSeriesThemeStyles:(BOOL)a1;
- (void)p_addParagraphStyleForSemanticUsage:(id)a0 mappedStyle:(id)a1 mappedState:(id)a2 fromPriorStyle:(id)a3 andPriorState:(id)a4 maintainPriorIndex:(BOOL)a5 withStyleMapper:(id)a6 withStylesheet:(id)a7 toNewParagraphStylesTable:(id)a8 andStyleMap:(id)a9;
- (id)p_formatSemanticTag:(id)a0;
- (id)p_locationOfStyleInNetwork:(id)a0;
- (id)p_propertySetWithPropertySetType:(long long)a0 forStyle:(id)a1;
- (id)referenceLineStyles;
- (id)referenceLineThemeStyle;
- (void)replaceAllInstancesOfStyle:(id)a0 withStyle:(id)a1;
- (id)semanticUsagesOfParagraphStylePropertiesWithPropertySetType:(long long)a0;
- (id)semanticUsagesToParagraphStyleMapWithPropertySetType:(long long)a0 filteredBySemanticUsages:(id)a1;
- (id)seriesPrivateStyles;
- (id)seriesThemeStyles;
- (void)setCategoryAxisStyles:(id)a0;
- (void)setChartStyle:(id)a0;
- (void)setParagraphStyles:(id)a0;
- (void)setReferenceLineStyles:(id)a0;
- (void)setReferenceLineThemeStyle:(id)a0;
- (void)setSeriesPrivateStyles:(id)a0;
- (void)setSeriesThemeStyles:(id)a0;
- (void)setStyle:(id)a0 withSemanticTag:(id)a1;
- (void)setValueAxisStyles:(id)a0;
- (id)stateByAdoptingStylesheet:(id)a0 withMapper:(id)a1;
- (id)stateByExpandingForSeriesCount:(unsigned long long)a0 andReferenceLineCount:(unsigned long long)a1;
- (id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)a0;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)a0;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)a0;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)a0 withMapper:(id)a1;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)styleForSemanticTag:(id)a0;
- (id)styleLookupSemanticTagForSemanticTag:(id)a0;
- (id)styleNetworkDescription;
- (id)styleToUseForSemanticTag:(id)a0;
- (id)usesOfParagraphStylePropertiesWithPropertySetType:(long long)a0;

@end
