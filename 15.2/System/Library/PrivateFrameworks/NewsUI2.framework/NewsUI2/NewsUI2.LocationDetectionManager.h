@class CLLocation;

@interface NewsUI2.LocationDetectionManager : NSObject <CLLocationManagerDelegate, TSLocationDetectionManagerType> {
    void /* unknown type, empty encoding */ locationManager;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ observableMostFrequentLocation;
@property (nonatomic, readonly) CLLocation *mostFrequentLocation;
@property (nonatomic, readonly) BOOL locationServicesEnabled;
@property (nonatomic, readonly) BOOL authorized;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
