@class NSString, HKCountrySet, NSObject;
@protocol HDPairedDeviceCapabilityProviding, HDRegionAvailabilityDataSource, OS_os_log;

@interface HDRegionAvailabilityDataSourceWithNanoRegistryFallback : NSObject <HDRegionAvailabilityDataSource> {
    id<HDRegionAvailabilityDataSource> _regionAvailabilityDataSource;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    NSString *_devicePropertyName;
    NSObject<OS_os_log> *_loggingCategory;
    BOOL _shouldReturnLocalAvailabilityForNilDeviceRegions;
}

@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteCountrySetForDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithRegionAvailabilityDataSource:(id)a0 pairedDeviceCapabilityProvider:(id)a1 availableRegionsDevicePropertyName:(id)a2 loggingCategory:(id)a3 shouldReturnLocalAvailabilityForNilDeviceRegions:(BOOL)a4;

@end
