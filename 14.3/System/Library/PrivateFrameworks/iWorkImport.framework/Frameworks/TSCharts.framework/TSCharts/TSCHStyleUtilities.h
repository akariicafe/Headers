@interface TSCHStyleUtilities : NSObject

+ (id)nullFill;
+ (id)defaultShadow;
+ (BOOL)hasShadow:(id)a0;
+ (float)defaultInnerRadiusPercentage;
+ (float)defaultPieLabelExplosionPercentage;
+ (BOOL)allSeriesInList:(id)a0 haveExplosionValue:(double)a1;
+ (float)defaultDonutLabelExplosionPercentage;
+ (id)fullyPopulatedStyleFromStyle:(id)a0 context:(id)a1;
+ (BOOL)hasNoFill:(id)a0;
+ (struct CGSize { double x0; double x1; })bodySizeWithMinimumWedgeExplosionWithChartModel:(id)a0 bodySize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isNullFill:(id)a0;
+ (BOOL)upgradeShadowProperties:(id)a0 inMap:(id)a1;
+ (id)nullShadow;
+ (BOOL)p_hasShadow:(id)a0;
+ (BOOL)upgradedShadowPropertyFromShadow:(id)a0 outUpgraded:(id *)a1;
+ (void)updateStyleState:(id)a0 forMutationsPerStyleOwner:(id)a1;
+ (void)p_adjustTrendlineSaturation:(double *)a0 brightness:(double *)a1;
+ (id)uiStringForLabelFormatType:(int)a0 useShortString:(BOOL)a1;
+ (id)p_referenceColorForObject:(id)a0;
+ (id)fullyPopulatedStylesFromArray:(id)a0 context:(id)a1 styleClass:(Class)a2;
+ (id)upgradedShadowPropertyForParagraphStyle:(id)a0;
+ (id)shadowToChartsNullShadow:(id)a0;
+ (id)chartsNullShadowToDefaultDisabledShadow:(id)a0;
+ (void)updateStyleState:(id)a0 forPropertyMutationTuples:(id)a1;
+ (void)upgradeAlignmentInParagraphStyles:(id)a0 willModifyBlock:(id /* block */)a1;
+ (void)convertToSimpleTSDFillsInProperties:(id)a0 inMap:(id)a1 context:(id)a2;
+ (id)trendlineColorFromCGColor:(struct CGColor { } *)a0;
+ (id)stylesheetOfStyles:(id)a0 nilAllowed:(BOOL)a1;
+ (void)breakUpFontName:(id)a0 isBold:(BOOL *)a1 isItalic:(BOOL *)a2;
+ (void)updateParagraphStylePropertyMapsForMutationLookup:(id)a0 mutationDictionary:(id)a1 styleOwner:(id)a2 indexProperty:(int)a3 paragraphStyleProperty:(int)a4 value:(id)a5;
+ (id)availableStrokes;
+ (id)uiStringForLabelFormatType:(int)a0;
+ (unsigned long long)segmentIndexForLineEnd:(id)a0;
+ (id)lineEndForSegmentIndex:(long long)a0;
+ (id)fillForSeries:(id)a0 chartType:(id)a1;
+ (double)uiSliderAngleMin;
+ (double)uiSliderAngleMax;
+ (double)propertyAngleForUISliderAngle:(double)a0;
+ (double)uiSliderAngleForPropertyAngle:(double)a0;
+ (BOOL)useOutsideParagraphStyleIndexForSeries:(id)a0 chartType:(id)a1 layout:(id)a2;
+ (float)pre2_4DefaultPieLabelExplosionPercentageForCalloutLineCalculation;
+ (double)pieFamilyLabelExplosionMinimumPercentage;
+ (double)pieFamilyLabelExplosionMaximumPercentage;
+ (double)p_bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(double)a0 chartRadius:(double)a1;
+ (double)p_pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(double)a0 chartRadius:(double)a1;
+ (double)pre2_4BendedCalloutLineLabelExplosionValueFromExplosionValue:(double)a0 chartModel:(id)a1 bodySize:(struct CGSize { double x0; double x1; })a2;
+ (float)defaultCalloutLineThickness;
+ (double)bendedCalloutLineLabelExplosionValueFromPre2_4ExplosionValue:(double)a0 chartModel:(id)a1 bodySize:(struct CGSize { double x0; double x1; })a2;
+ (id)tupleToUpdate2_3ExplosionFromValue:(id)a0 chartInfo:(id)a1 forStyleOwner:(id)a2;
+ (float)centeredDonutLabelExplosionPercentageWithInnerRadius:(double)a0;
+ (BOOL)labelExplosionIsCenteredInWedgeWithInnerRadius:(double)a0 labelExplosion:(double)a1;
+ (float)defaultInnerRadiusPercentageForIconRendering;
+ (BOOL)shouldAnchorLabelsForSeries:(id)a0 innerRadius:(double)a1 calloutLineType:(long long)a2 defaultLabelExplosion:(double)a3;

@end
