@interface NWCHourlyForecastConditionGlyphView : NWCHourlyForecastView

- (void)applyStyle;
- (void)applyAccentFilters:(id)a0;
- (void)applyEntryModel:(id)a0 date:(id)a1 timeZone:(id)a2;
- (void)applyNonAccentFilters:(id)a0;
- (void)applySimpleEntryModel:(id)a0;
- (id)topLabelTextFromConditions:(id)a0;

@end
