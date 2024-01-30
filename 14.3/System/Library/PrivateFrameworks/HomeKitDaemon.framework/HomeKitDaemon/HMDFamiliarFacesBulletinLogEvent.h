@class NSUUID, NSString;

@interface HMDFamiliarFacesBulletinLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly) long long numberOfKnownPersons;
@property (readonly) long long numberOfUnknownPersons;
@property (readonly, copy) NSString *bulletinReason;
@property (readonly) BOOL doorbellPressed;
@property (readonly) double secondsFromDoorbellToFaceClassification;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithNumberOfKnownPersons:(long long)a0 numberOfUnknownPersons:(long long)a1 bulletinReason:(id)a2 doorbellPressed:(BOOL)a3 secondsFromDoorbellToFaceClassification:(double)a4;

@end
