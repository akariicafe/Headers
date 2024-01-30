@class NSString, NSDictionary;

@interface SFShareSheetCompletedEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) unsigned long long presentationMs;
@property (nonatomic) unsigned long long totalShareTimeMs;
@property (nonatomic) BOOL isCollaborative;
@property (nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
