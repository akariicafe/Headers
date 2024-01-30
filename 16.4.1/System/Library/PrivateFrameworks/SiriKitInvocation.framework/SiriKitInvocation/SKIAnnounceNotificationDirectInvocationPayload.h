@class NSString, UNNotification;

@interface SKIAnnounceNotificationDirectInvocationPayload : NSObject

@property (copy, nonatomic) UNNotification *notification;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appBundleIdOfLastAnnouncement;
@property (nonatomic) unsigned long long synchronousBurstIndex;
@property (nonatomic) BOOL isSameTypeAsLastAnnouncement;
@property (nonatomic) double timeSinceLastAnnouncement;
@property (nonatomic) long long announcementPlatform;

- (void).cxx_destruct;
- (id)notificationIdentifier;
- (id)initWithNotification:(id)a0 appBundleId:(id)a1 appBundleIdOfLastAnnouncement:(id)a2 synchronousBurstIndex:(unsigned long long)a3 isSameTypeAsLastAnnouncement:(BOOL)a4 timeSinceLastAnnouncement:(double)a5 announcementPlatform:(long long)a6;

@end
