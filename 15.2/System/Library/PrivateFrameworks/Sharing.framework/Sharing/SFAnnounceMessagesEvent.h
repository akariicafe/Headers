@class NSString, NSDictionary;

@interface SFAnnounceMessagesEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) BOOL allowsSiriWhenLocked;
@property (nonatomic) BOOL announceMessagesAlreadyEnabled;
@property (nonatomic) long long pairingExitView;
@property (nonatomic) BOOL skippedTutorialCards;
@property (nonatomic) BOOL userAutomaticallyEnrolled;
@property (nonatomic) BOOL userExplicitlyOptedIn;
@property (nonatomic) BOOL userExplicitlyOptedOut;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForExitView:(long long)a0;

- (void)submitEvent;

@end
