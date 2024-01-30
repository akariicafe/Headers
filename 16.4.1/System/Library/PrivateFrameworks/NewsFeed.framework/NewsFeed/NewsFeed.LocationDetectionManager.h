@class CLLocation;

@interface NewsFeed.LocationDetectionManager : NSObject <CLLocationManagerDelegate, TSLocationDetectionManagerType> {
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ onUserInteractedWithLocationAuthorizationTCC;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ observableMostFrequentLocation;
@property (nonatomic, readonly) CLLocation *mostFrequentLocation;
@property (nonatomic, readonly) BOOL locationServicesEnabled;
@property (nonatomic, readonly) BOOL authorized;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
