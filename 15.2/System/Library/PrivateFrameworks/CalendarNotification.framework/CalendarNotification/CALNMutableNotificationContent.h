@class NSString, NSArray, NSURL, NSDate, CALNNotificationSound, NSDictionary;

@interface CALNMutableNotificationContent : CALNNotificationContent

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSURL *defaultActionURL;
@property (nonatomic) BOOL shouldHideTime;
@property (copy, nonatomic) NSString *iconIdentifier;
@property (nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (copy, nonatomic) NSArray *peopleIdentifiers;
@property (copy, nonatomic) CALNNotificationSound *sound;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (nonatomic) unsigned long long interruptionLevel;

- (void)setShouldHideTime:(BOOL)a0;
- (void)setCategoryIdentifier:(id)a0;
- (void)setSummaryArgumentCount:(unsigned long long)a0;
- (void)setDefaultActionURL:(id)a0;
- (void)setShouldSuppressSyncDismissalWhenRemoved:(BOOL)a0;
- (void)setSound:(id)a0;
- (void)setSummaryArgument:(id)a0;
- (void)setInterruptionLevel:(unsigned long long)a0;
- (void)setThreadIdentifier:(id)a0;
- (void)setSectionIdentifier:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)init;
- (void)setIconIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitle:(id)a0;
- (void)setUserInfoValue:(id)a0 forKey:(id)a1;
- (void)setBody:(id)a0;
- (void)setPeopleIdentifiers:(id)a0;
- (void)setExpirationDate:(id)a0;
- (void)setDate:(id)a0;
- (void)setUserInfo:(id)a0;

@end
