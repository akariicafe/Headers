@class NSArray, GEOPDPlaceInfosModuleConfiguration;

@interface GEOPlaceDetailsModuleConfiguration : NSObject {
    GEOPDPlaceInfosModuleConfiguration *_placeInfosModuleConfig;
}

@property (readonly, nonatomic) int locationStyle;
@property (readonly, nonatomic) NSArray *factoidReferences;

- (id)initWithPlaceInfoModuleConfiguration:(id)a0;
- (void).cxx_destruct;

@end
