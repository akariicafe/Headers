@interface ATXSuggestedPagesModeAffinityWidgetDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (id)_widgetIdentifierWithoutIntentForCHSWidget:(id)a0;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)fetchWidgetsPassingThresholdForMode:(unsigned long long)a0 forSize:(unsigned long long)a1;
- (double)_fetchScoreThresholdForWidgetModeAffinityModel;
- (id)_widgetIdentifierWithoutIntentForWidget:(id)a0;

@end
