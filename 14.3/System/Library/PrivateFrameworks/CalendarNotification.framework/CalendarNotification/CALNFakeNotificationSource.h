@class NSString, NSArray;
@protocol CALNCalendarIconIdentifierProvider, CALNNotificationManager;

@interface CALNFakeNotificationSource : NSObject <CALNNotificationSource>

@property (readonly, nonatomic) id<CALNNotificationManager> notificationManager;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_activeSources;
+ (id)_activeSourcesQueue;

- (void)postFakeNotification;
- (void)refreshNotifications:(id)a0;
- (void).cxx_destruct;
- (id)contentForNotificationWithSourceClientIdentifier:(id)a0;
- (void)didReceiveResponse:(id)a0;
- (id)initWithNotificationManager:(id)a0 iconIdentifierProvider:(id)a1 sourceIdentifierSuffix:(id)a2;

@end
