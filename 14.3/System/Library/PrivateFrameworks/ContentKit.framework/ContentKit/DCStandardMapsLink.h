@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDictionary *queryDictionary;

+ (BOOL)isMapsURL:(id)a0;
+ (id)mapsLinkWithURL:(id)a0;
+ (BOOL)isStandardAppleMapsURL:(id)a0;
+ (BOOL)isStandardGoogleMapsURL:(id)a0;

- (unsigned long long)mapType;
- (void).cxx_destruct;
- (id)searchQuery;
- (id)initWithURL:(id)a0;
- (long long)zoomLevel;
- (id)startAddress;
- (id)destinationAddress;
- (id)searchLocation;
- (unsigned long long)directionsMode;
- (BOOL)showsTraffic;
- (id)searchNearQuery;
- (id)centerLocation;
- (BOOL)showsTransit;
- (BOOL)showsStreetView;
- (BOOL)showsBicycling;
- (id)streetViewLocation;

@end
