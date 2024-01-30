@class NSString, CalLocationAuthorizationStatus, CLLocationManager, NSObject;
@protocol OS_dispatch_group;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {
    id _bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> *_initializationGroup;
    CLLocationManager *_locationManager;
    CalLocationAuthorizationStatus *_status;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)authorizationStatusForBundle:(id)a0;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (id)authorizationForBundleIdentifier:(id)a0 bundle:(id)a1 createIfNecessary:(BOOL)a2;
+ (int)authorizationStatusForBundleIdentifier:(id)a0;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)a0;
+ (BOOL)preciseLocationAuthorizedForBundle:(id)a0;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)a0;
+ (id)logHandle;
+ (unsigned long long)ttlLocationStatus;
+ (int)authorizationStatusForBundleIdentifier:(id)a0 bundle:(id)a1;
+ (unsigned long long)locationPrecisionForBundle:(id)a0;

- (id)authorizationStatus;
- (void).cxx_destruct;
- (unsigned long long)waitForPrecision;
- (id)initWithBundleID:(id)a0 bundle:(id)a1 queue:(id)a2;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
