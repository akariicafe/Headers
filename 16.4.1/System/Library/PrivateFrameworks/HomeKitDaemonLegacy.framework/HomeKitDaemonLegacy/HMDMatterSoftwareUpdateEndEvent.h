@class NSString, NSMutableDictionary, NSDictionary, NSNumber;

@interface HMDMatterSoftwareUpdateEndEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (retain, nonatomic) NSMutableDictionary *vendorDetailsForCoreAnalytics;
@property (readonly, nonatomic) NSString *accessoryTransport;
@property (readonly, nonatomic) NSNumber *accessoryProductID;
@property (readonly, nonatomic) NSNumber *accessoryVendorID;
@property (readonly, nonatomic) NSNumber *accessoryFirmwareVersionNumber;
@property (readonly, nonatomic) NSNumber *targetFirmwareVersionNumber;
@property (readonly, nonatomic) BOOL isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 transport:(id)a1 accessorySoftwareVersionNumber:(id)a2 updateSoftwareVersionNumber:(id)a3 error:(id)a4;

@end
