@class GEOPDPlacecardLayoutConfiguration, GEOModuleLayoutEntry;

@interface GEOPlacecardLayoutConfiguration : NSObject {
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
}

@property (readonly, nonatomic) GEOModuleLayoutEntry *currentModuleLayoutEntry;

- (void).cxx_destruct;
- (id)initWithPlacecardLayoutConfiguration:(id)a0;

@end
