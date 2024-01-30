@interface ATXWidgetModeModel : NSObject {
    unsigned long long _mode;
}

- (id)initWithMode:(unsigned long long)a0;
- (id)init;
- (id)fetchAvailableWidgets;
- (id)widgetModeEntityForWidgetId:(id)a0 widgetFeatures:(id)a1 availableWidgets:(id)a2;
- (id)widgetModeEntityForDescriptor:(id)a0 widgetSize:(long long)a1;
- (id)scoredWidgetModeEntityWithWidgetFeatures:(id)a0 widget:(id)a1;
- (double)scoreFromCorrelationStatistics:(id)a0;
- (id)scoredEntitiesWithScoredAppEntities:(id)a0;

@end
