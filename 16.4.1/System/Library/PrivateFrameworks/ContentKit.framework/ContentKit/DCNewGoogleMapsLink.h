@class NSURL, NSArray, NSString;

@interface DCNewGoogleMapsLink : DCMapsLink {
    BOOL _showsTransit;
    BOOL _showsBicycling;
    BOOL _showsStreetView;
    BOOL _showsTraffic;
    unsigned long long _mapType;
    unsigned long long _directionsMode;
    long long _zoomLevel;
}

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSArray *mapsURLComponents;
@property (retain, nonatomic) NSString *location;
@property (readonly, nonatomic) BOOL parsed;
@property (readonly, nonatomic) int linkType;

+ (BOOL)isMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (unsigned long long)mapType;
- (BOOL)showsTraffic;
- (long long)zoomLevel;
- (void)parse;
- (id)startAddress;
- (id)destinationAddress;
- (void).cxx_destruct;
- (id)searchQuery;
- (id)searchLocation;
- (id)dataString;
- (unsigned long long)directionsMode;
- (void)parseLatLonZoom;
- (id)searchNearQuery;
- (BOOL)showsStreetView;
- (id)centerLocation;
- (id)latLonZoomString;
- (id)mapsURLComponentAtIndex:(long long)a0;
- (void)parseLinkType;
- (void)parseMapsData;
- (BOOL)showsBicycling;
- (BOOL)showsTransit;
- (id)streetViewLocation;

@end
