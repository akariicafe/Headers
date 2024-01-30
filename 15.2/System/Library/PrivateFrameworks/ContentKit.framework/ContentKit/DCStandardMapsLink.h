@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (BOOL)isMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;
+ (BOOL)isStandardAppleMapsURL:(id)a0;
+ (BOOL)isStandardGoogleMapsURL:(id)a0;

- (long long)zoomLevel;
- (id)searchQuery;
- (id)initWithURL:(id)a0;
- (id)destinationAddress;
- (BOOL)showsTraffic;
- (void).cxx_destruct;
- (id)startAddress;
- (unsigned long long)mapType;
- (id)searchLocation;
- (unsigned long long)directionsMode;
- (id)searchNearQuery;
- (id)centerLocation;
- (BOOL)showsTransit;
- (BOOL)showsStreetView;
- (BOOL)showsBicycling;
- (id)streetViewLocation;

@end
