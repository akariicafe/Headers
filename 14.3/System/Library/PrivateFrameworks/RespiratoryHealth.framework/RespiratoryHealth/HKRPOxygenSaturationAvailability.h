@class NSDictionary, NSSet;
@protocol HKRPOxygenSaturationAvailabilityDataSource;

@interface HKRPOxygenSaturationAvailability : NSObject {
    id<HKRPOxygenSaturationAvailabilityDataSource> _dataSource;
}

@property (class, readonly, nonatomic) NSDictionary *allowedCountryCodesByVersion;
@property (class, readonly, nonatomic) NSSet *allowedCountryCodesISO3166;

@property (readonly, nonatomic, getter=isDeviceSupported) BOOL deviceSupported;

+ (id)_availabilityPlistURL;
+ (BOOL)isCountryAllowed:(id)a0;

- (id)initWithDataSource:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
