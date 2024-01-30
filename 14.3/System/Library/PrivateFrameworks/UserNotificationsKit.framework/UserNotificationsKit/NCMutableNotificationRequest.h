@class NSDate, NSString, NSArray, NCNotificationContent, NSSet, NCNotificationOptions, NSDictionary, NCNotificationAction, NCNotificationSound, UNNotification;

@interface NCMutableNotificationRequest : NCNotificationRequest

@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *notificationIdentifier;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSSet *subSectionIdentifiers;
@property (copy, nonatomic) NSString *highestPrioritySubSectionIdentifier;
@property (copy, nonatomic) NSArray *intentIdentifiers;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (copy, nonatomic) NSString *parentSectionIdentifier;
@property (nonatomic, getter=isUniqueThreadIdentifier) BOOL uniqueThreadIdentifier;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSSet *requestDestinations;
@property (retain, nonatomic) NCNotificationContent *content;
@property (retain, nonatomic) NCNotificationOptions *options;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) NSSet *settingsSections;
@property (retain, nonatomic) NCNotificationSound *sound;
@property (retain, nonatomic) NCNotificationAction *cancelAction;
@property (retain, nonatomic) NCNotificationAction *clearAction;
@property (retain, nonatomic) NCNotificationAction *closeAction;
@property (retain, nonatomic) NCNotificationAction *defaultAction;
@property (retain, nonatomic) NCNotificationAction *silenceAction;
@property (copy, nonatomic) NSDictionary *supplementaryActions;
@property (retain, nonatomic) UNNotification *userNotification;
@property (nonatomic) BOOL isCollapsedNotification;
@property (nonatomic) unsigned long long collapsedNotificationsCount;
@property (copy, nonatomic) NSDictionary *sourceInfo;
@property (nonatomic, getter=isCriticalAlert) BOOL criticalAlert;

- (void)setSound:(id)a0;
- (void)setSectionIdentifier:(id)a0;
- (void)setThreadIdentifier:(id)a0;
- (void)setCategoryIdentifier:(id)a0;
- (void)setPeopleIdentifiers:(id)a0;
- (void)setOptions:(id)a0;
- (void)setDefaultAction:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserNotification:(id)a0;
- (void)setParentSectionIdentifier:(id)a0;
- (void)setSourceInfo:(id)a0;
- (void)setContext:(id)a0;
- (void)setIntentIdentifiers:(id)a0;
- (void)setNotificationIdentifier:(id)a0;
- (void)setSilenceAction:(id)a0;
- (void)setTimestamp:(id)a0;
- (void)setContent:(id)a0;
- (void)setCancelAction:(id)a0;
- (void)setSupplementaryActions:(id)a0;
- (void)setClearAction:(id)a0;
- (void)setSubSectionIdentifiers:(id)a0;
- (void)setUniqueThreadIdentifier:(BOOL)a0;
- (void)setCriticalAlert:(BOOL)a0;
- (void)setHighestPrioritySubSectionIdentifier:(id)a0;
- (void)setRequestDestinations:(id)a0;
- (void)setSettingsSections:(id)a0;
- (void)setCloseAction:(id)a0;
- (void)setIsCollapsedNotification:(BOOL)a0;
- (void)setCollapsedNotificationsCount:(unsigned long long)a0;

@end
