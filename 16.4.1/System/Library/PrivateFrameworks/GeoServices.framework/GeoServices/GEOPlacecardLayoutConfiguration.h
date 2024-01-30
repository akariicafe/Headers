@class GEOPDPlacecardLayoutConfiguration, GEOModuleLayoutEntry;
@protocol GEOModuleConfigurationProvider;

@interface GEOPlacecardLayoutConfiguration : NSObject {
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
    id<GEOModuleConfigurationProvider> _moduleConfigProvider;
}

@property (readonly, nonatomic) GEOModuleLayoutEntry *currentModuleLayoutEntry;

- (void).cxx_destruct;
- (id)initWithPlacecardLayoutConfiguration:(id)a0 moduleConfigurationProvider:(id)a1;

@end
