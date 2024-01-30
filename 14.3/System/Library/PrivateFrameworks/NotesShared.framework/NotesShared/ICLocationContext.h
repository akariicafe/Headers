@class CLGeocoder, NSString, CLLocationManager;

@interface ICLocationContext : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
}

@property (retain, nonatomic) CLGeocoder *geocoder;
@property (readonly, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) BOOL requestedAuthorization;
@property (readonly, nonatomic) BOOL canGetLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedContext;

@end
