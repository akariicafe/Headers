@class NSMutableDictionary;

@interface HKGraphSeriesConfigurationManager : NSObject {
    NSMutableDictionary *_zoomLevelConfigurationManagers;
}

- (id)allDisplayTypes;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)removeConfigurationsForDisplayType:(id)a0;
- (id)configurationForDisplayType:(id)a0 zoom:(long long)a1;
- (void)addConfiguration:(id)a0 zoom:(long long)a1;
- (id)allDisplayTypesForZoom:(long long)a0;
- (id)configurationForGraphSeries:(id)a0 zoom:(long long)a1;
- (id)allGraphSeriesForZoom:(long long)a0;
- (long long)_zoomLevelForGraphZoom:(long long)a0;
- (id)_configurationManagerForZoom:(long long)a0;

@end
