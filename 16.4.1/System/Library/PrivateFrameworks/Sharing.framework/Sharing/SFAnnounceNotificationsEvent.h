@class NSString, NSDictionary;

@interface SFAnnounceNotificationsEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) BOOL tappedInitialEnable;
@property (nonatomic) BOOL tappedCustomize;
@property (nonatomic) BOOL tappedNotNow;
@property (nonatomic) BOOL tappedDismissButton;
@property (nonatomic) BOOL customizedApps;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitEvent;

@end
