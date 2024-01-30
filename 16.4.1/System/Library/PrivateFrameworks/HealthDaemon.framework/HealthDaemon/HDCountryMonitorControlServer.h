@class NSString, HDOTAFeatureAvailabilityManager, HDPeriodicCountryMonitor;

@interface HDCountryMonitorControlServer : HDStandardTaskServer <HKCountryMonitorControlServer> {
    HDPeriodicCountryMonitor *_countryMonitor;
    HDOTAFeatureAvailabilityManager *_OTAFeatureAvailabilityManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (id)taskIdentifier;

@end
