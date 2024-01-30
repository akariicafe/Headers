@class NSDictionary, HMDLogEventWeekBasedFilter, NSString;
@protocol HMDCoreAnalyticsLogObserverDataSource;

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMFLogging, HMMLogEventObserver>

@property (readonly, weak, nonatomic) id<HMDCoreAnalyticsLogObserverDataSource> dataSource;
@property (retain, nonatomic) NSDictionary *homeConfigurationCommonDimensions;
@property (readonly, nonatomic) HMDLogEventWeekBasedFilter *weekBasedFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)addAccessoryDetailsFromLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addDeviceCapabilitiesAndEnablementsCommonDimensionsToEventDictionary:(id)a0;
- (void)addDeviceStateCommonDimensionsToEventDictionary:(id)a0;
- (void)addErrorDetailsFromLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addEventDurationInMillisecondsFromLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addHistogrammedCommonConfigurationDimensionsForLogEvent:(id)a0 toEventDictionary:(id)a1;
- (void)addHomesCategorizationCommonDimensionToEventDictionary:(id)a0;
- (id)dictionaryFromEvent:(id)a0 enableLogging:(BOOL)a1;
- (id)initWithDataSource:(id)a0 weekBasedFilter:(id)a1;

@end
