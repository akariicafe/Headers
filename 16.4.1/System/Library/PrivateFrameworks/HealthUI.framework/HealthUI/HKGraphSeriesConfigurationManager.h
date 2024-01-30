@class NSMutableDictionary;

@interface HKGraphSeriesConfigurationManager : NSObject {
    NSMutableDictionary *_zoomLevelConfigurationManagers;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)allDisplayTypes;
- (id)_configurationManagerForZoom:(long long)a0;
- (long long)_zoomLevelForGraphZoom:(long long)a0;
- (void)addConfiguration:(id)a0 zoom:(long long)a1;
- (id)allDisplayTypesForZoom:(long long)a0;
- (id)allGraphSeriesForZoom:(long long)a0;
- (id)configurationForDisplayType:(id)a0 zoom:(long long)a1;
- (id)configurationForGraphSeries:(id)a0 zoom:(long long)a1;
- (void)removeConfigurationsForDisplayType:(id)a0;

@end
