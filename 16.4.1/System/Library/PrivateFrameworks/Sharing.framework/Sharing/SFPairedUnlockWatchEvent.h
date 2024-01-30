@class NSString, NSDictionary;

@interface SFPairedUnlockWatchEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) unsigned int motionCheckDurationMs;
@property (nonatomic) long long onWristConfidence;
@property (nonatomic) float timeSinceLastWristRaiseSec;
@property (nonatomic) float timeSinceLastOnWristSec;
@property (nonatomic) float timeSinceBootMin;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitEvent;

@end
