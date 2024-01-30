@class NSString;

@interface DCMutableMapsLink : DCMapsLink

@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *searchNearQuery;
@property (copy, nonatomic) NSString *searchLocation;
@property (copy, nonatomic) NSString *startAddress;
@property (copy, nonatomic) NSString *destinationAddress;
@property (nonatomic) unsigned long long directionsMode;
@property (copy, nonatomic) NSString *centerLocation;
@property (nonatomic) long long zoomLevel;
@property (nonatomic) unsigned long long mapType;
@property (nonatomic) BOOL showsTraffic;
@property (nonatomic) BOOL showsTransit;
@property (nonatomic) BOOL showsStreetView;
@property (nonatomic) BOOL showsBicycling;
@property (copy, nonatomic) NSString *streetViewLocation;

- (void).cxx_destruct;

@end
