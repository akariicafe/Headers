@class NSString, NSDictionary;

@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) long long numberOfKnownPersons;
@property (readonly) long long numberOfUnknownPersons;
@property (readonly, copy) NSString *bulletinReason;
@property (readonly) BOOL doorbellPressed;
@property (readonly) double secondsFromDoorbellToFaceClassification;


- (void).cxx_destruct;
- (id)initWithNumberOfKnownPersons:(long long)a0 numberOfUnknownPersons:(long long)a1 bulletinReason:(id)a2 doorbellPressed:(BOOL)a3 secondsFromDoorbellToFaceClassification:(double)a4;

@end
