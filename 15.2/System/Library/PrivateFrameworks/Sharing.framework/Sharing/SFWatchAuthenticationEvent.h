@class NSString, NSDictionary;

@interface SFWatchAuthenticationEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) BOOL succeeded;
@property (nonatomic) unsigned int failureReason;
@property (nonatomic) double keyExchangeDuration;
@property (nonatomic) double awdlBringUpDuration;
@property (nonatomic) double rangingDuration;
@property (nonatomic) double peerFoundDuration;
@property (nonatomic) double totalDuration;
@property (copy, nonatomic) NSString *watchHardwareModel;
@property (copy, nonatomic) NSString *watchSoftwareVersion;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
