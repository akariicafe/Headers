@class NSDictionary, HKCountrySet, NSSet;
@protocol HKRPOxygenSaturationAvailabilityDataSource;

@interface HKRPOxygenSaturationAvailability : NSObject {
    id<HKRPOxygenSaturationAvailabilityDataSource> _dataSource;
}

@property (class, readonly, nonatomic) NSDictionary *allowedCountryCodesByVersion;
@property (class, readonly, nonatomic) HKCountrySet *allowedCountrySet;
@property (class, readonly, nonatomic) NSSet *allowedCountryCodesISO3166;

@property (readonly, nonatomic, getter=isDeviceSupported) BOOL deviceSupported;

+ (BOOL)isCountryAllowed:(id)a0;
+ (id)_availabilityPlistURL;

- (id)initWithDataSource:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
