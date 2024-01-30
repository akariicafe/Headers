@class GEOButtonModuleConfiguration, GEORelatedPlaceModuleConfiguration, GEOHeaderButtonModuleConfiguration, GEOBusinessInfoModuleConfiguration, GEOUnifiedActionButtonModuleConfiguration, GEOPDModuleConfiguration, GEOPlaceDetailsModuleConfiguration, GEOPlaceRibbonConfiguration, GEOWebContentModuleConfiguration;

@interface GEOModuleConfiguration : NSObject {
    GEOPDModuleConfiguration *_moduleConfig;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOPlaceRibbonConfiguration *placeRibbonConfig;
@property (readonly, nonatomic) GEORelatedPlaceModuleConfiguration *relatedPlaceConfig;
@property (readonly, nonatomic) GEOWebContentModuleConfiguration *webContentConfig;
@property (readonly, nonatomic) GEOButtonModuleConfiguration *actionButtonConfig;
@property (readonly, nonatomic) GEOHeaderButtonModuleConfiguration *headerButtonConfig;
@property (readonly, nonatomic) GEOPlaceDetailsModuleConfiguration *placeDetailsConfig;
@property (readonly, nonatomic) GEOBusinessInfoModuleConfiguration *businessInfoConfig;
@property (readonly, nonatomic) GEOUnifiedActionButtonModuleConfiguration *unifiedActionConfig;

+ (id)moduleConfigurationForURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)_logNoModuleConfigMatchForType;
- (id)initWithModuleConfiguration:(id)a0;

@end
