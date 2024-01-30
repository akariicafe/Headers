@class NSString, NSArray;
@protocol CALNSourceEventRepresentationProvider, CALNCalendarResourceChangedNotificationDataSource, CALNCalendarIconIdentifierProvider, CALNNotificationManager, CalDateProvider;

@interface CALNCalendarResourceChangedNotificationSource : NSObject <CALNNotificationSource>

@property (readonly, nonatomic) id<CALNCalendarResourceChangedNotificationDataSource> dataSource;
@property (readonly, weak, nonatomic) id<CALNNotificationManager> notificationManager;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshNotifications:(id)a0;
- (void).cxx_destruct;
- (id)contentForNotificationWithSourceClientIdentifier:(id)a0;
- (id)contentForNotificationWithInfo:(id)a0;
- (void)didReceiveResponse:(id)a0;
- (id)initWithDataSource:(id)a0 notificationManager:(id)a1 iconIdentifierProvider:(id)a2 sourceEventRepresentationProvider:(id)a3 dateProvider:(id)a4;

@end
