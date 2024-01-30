@class NSArray, GEOPDPlaceInfosModuleConfiguration;

@interface GEOPlaceDetailsModuleConfiguration : NSObject {
    GEOPDPlaceInfosModuleConfiguration *_placeInfosModuleConfig;
}

@property (readonly, nonatomic) int locationStyle;
@property (readonly, nonatomic) NSArray *factoidReferences;
@property (readonly, nonatomic) int attributionStyle;

- (void).cxx_destruct;
- (id)initWithPlaceInfoModuleConfiguration:(id)a0;

@end
