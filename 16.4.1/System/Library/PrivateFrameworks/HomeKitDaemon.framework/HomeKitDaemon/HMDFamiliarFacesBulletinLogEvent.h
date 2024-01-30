@class NSString, NSDictionary;

@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) long long numberOfKnownPersons;
@property (readonly) long long numberOfUnknownPersons;
@property (readonly, copy) NSString *bulletinReason;
@property (readonly) BOOL doorbellPressed;
@property (readonly) double secondsFromDoorbellToFaceClassification;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithNumberOfKnownPersons:(long long)a0 numberOfUnknownPersons:(long long)a1 bulletinReason:(id)a2 doorbellPressed:(BOOL)a3 secondsFromDoorbellToFaceClassification:(double)a4;

@end
