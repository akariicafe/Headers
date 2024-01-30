@class NSString, NSArray;
@protocol CALNEventInvitationNotificationDataSource, CALNCalendarIconIdentifierProvider, CALNNotificationManager, CalDateProvider;

@interface CALNEventInvitationNotificationSource : NSObject <CALNNotificationSource>

@property (readonly, nonatomic) id<CALNEventInvitationNotificationDataSource> dataSource;
@property (readonly, weak, nonatomic) id<CALNNotificationManager> notificationManager;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acceptActionIdentifier;
+ (id)couldBeJunkCategoryIdentifier;
+ (id)declineActionIdentifier;
+ (id)defaultCategoryIdentifier;
+ (id)maybeActionIdentifier;
+ (id)reportJunkActionIdentifier;

- (void)refreshNotifications:(id)a0;
- (void)didReceiveResponse:(id)a0;
- (id)contentForNotificationWithSourceClientIdentifier:(id)a0;
- (id)initWithDataSource:(id)a0 notificationManager:(id)a1 iconIdentifierProvider:(id)a2 dateProvider:(id)a3;
- (id)_notificationBodyForNotificationInfo:(id)a0 contactIdentifier:(id *)a1 summaryArgument:(id *)a2;
- (void).cxx_destruct;
- (id)contentForNotificationWithInfo:(id)a0;

@end
