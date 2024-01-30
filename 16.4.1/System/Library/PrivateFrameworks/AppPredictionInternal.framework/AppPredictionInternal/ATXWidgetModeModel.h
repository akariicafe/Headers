@class ATXGlobalWidgetPopularityModel, ATXWidgetModeEntityModelWeights;

@interface ATXWidgetModeModel : NSObject {
    unsigned long long _mode;
    ATXWidgetModeEntityModelWeights *_widgetModeEntityModelWeights;
    ATXGlobalWidgetPopularityModel *_widgetPopularityModel;
}

+ (id)fetchAvailableWidgets;

- (void).cxx_destruct;
- (double)scoreFromCorrelationStatistics:(id)a0;
- (void)addEntitySpecificFeaturesToWidgetFeatures:(id)a0 scoredApp:(id)a1;
- (double)combineWidgetModeProbability:(double)a0 withAppModeProbabiilty:(double)a1;
- (id)initWithMode:(unsigned long long)a0 globalWidgetPopularityModel:(id)a1;
- (id)scoredEntitiesWithScoredAppEntities:(id)a0;
- (id)scoredWidgetModeEntityWithWidgetFeatures:(id)a0 widget:(id)a1 scoredApp:(id)a2;
- (id)widgetModeEntityForDescriptor:(id)a0 widgetSize:(long long)a1 scoredAppEntities:(id)a2;
- (id)widgetModeEntityForWidgetId:(id)a0 widgetFeatures:(id)a1 availableWidgets:(id)a2 scoredAppEntities:(id)a3;

@end
