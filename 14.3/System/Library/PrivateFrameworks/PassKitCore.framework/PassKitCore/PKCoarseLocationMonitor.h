@class NSString, CLLocationManager;

@interface PKCoarseLocationMonitor : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
}

@property (readonly, nonatomic) BOOL coarseLocationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
