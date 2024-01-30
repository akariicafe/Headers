@class NSString, NSDictionary;

@interface SFPairedUnlockDailyEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) long long successfulAttempts;
@property (nonatomic) long long failedAttempts;
@property (nonatomic) long long totalAttempts;
@property (nonatomic) long long passcodeUnlocks;
@property (nonatomic) long long totalUnlocks;
@property (nonatomic) BOOL phoneAutoUnlockEnabled;
@property (copy, nonatomic) NSString *phoneHardwareModel;
@property (copy, nonatomic) NSString *phoneSoftwareVersion;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
