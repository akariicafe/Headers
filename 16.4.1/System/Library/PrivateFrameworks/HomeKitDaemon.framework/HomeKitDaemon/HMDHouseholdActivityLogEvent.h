@class NSArray, NSString, NSDictionary;

@interface HMDHouseholdActivityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSArray *contributors;
@property unsigned long long requestCount;
@property unsigned long long activeDeviceCount;
@property unsigned long long numReadSiri;
@property unsigned long long numWriteSiri;
@property unsigned long long numReadFirstPartyApp;
@property unsigned long long numWriteFirstPartyApp;
@property unsigned long long numReadThirdPartyApp;
@property unsigned long long numWriteThirdPartyApp;
@property unsigned long long numAccessoriesAdded;
@property unsigned long long numScenesAdded;
@property unsigned long long numTriggersAdded;
@property unsigned long long numShortcutsAdded;
@property unsigned long long numScenesUserRun;
@property unsigned long long numShortcutsRun;
@property unsigned long long numTriggersFired;
@property unsigned long long cameraStreamStartSuccessCount;
@property unsigned long long cameraStreamStartFailureCount;
@property unsigned long long fetchCameraClipVideoSegmentAssetCount;
@property unsigned long long activeDaysBitField;
@property (getter=isActiveDay) BOOL activeDay;
@property long long countOfDaysSinceLastActive;
@property long long activeDaysPerMonthCount;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initPopulatedFromDate:(id)a0 homeUUID:(id)a1 contributors:(id)a2;
- (id)initWithDictionary:(id)a0 contributors:(id)a1;
- (id)initWithHomeUUID:(id)a0 contributors:(id)a1;
- (id)serializedMetric;

@end
