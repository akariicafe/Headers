@class NSString, NSDictionary, NSArray;

@interface HKSPAnalyticsSleepRoomEntryEvent : NSObject <HKSPAnalyticsEvent>

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) NSArray *keysRequiringIHAGating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_payloadWithProvidenceInfo:(id)a0 isOnboarded:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithProvenanceInfo:(id)a0 isOnboarded:(BOOL)a1;

@end
