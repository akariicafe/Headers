@class GEOPlaceRibbonConfiguration, MUPlaceDataAvailability, MKETAProvider;

@interface MUPlaceRibbonSectionControllerConfiguration : NSObject

@property (retain, nonatomic) GEOPlaceRibbonConfiguration *ribbonConfiguration;
@property (retain, nonatomic) MUPlaceDataAvailability *availability;
@property (retain, nonatomic) MKETAProvider *etaProvider;

- (void).cxx_destruct;

@end
