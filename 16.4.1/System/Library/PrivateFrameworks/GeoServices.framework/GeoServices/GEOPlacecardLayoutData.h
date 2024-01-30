@class GEOPDPlacecardLayoutData, NSString, GEOPlacecardLayoutConfiguration, GEOModuleLayoutEntry;

@interface GEOPlacecardLayoutData : NSObject <GEOModuleConfigurationProvider> {
    GEOPDPlacecardLayoutData *_placecardLayoutData;
    GEOPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
}

@property (readonly, nonatomic) GEOModuleLayoutEntry *currentModuleLayoutEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlacecardLayoutData:(id)a0;
- (id)moduleConfigurationForIndex:(unsigned long long)a0;

@end
