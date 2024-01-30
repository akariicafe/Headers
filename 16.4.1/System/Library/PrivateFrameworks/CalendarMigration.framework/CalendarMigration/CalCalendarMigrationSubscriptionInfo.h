@class NSURL, NSString;

@interface CalCalendarMigrationSubscriptionInfo : NSObject

@property (readonly, nonatomic) NSURL *calendarDirectory;
@property (readonly, nonatomic) NSString *principalUid;
@property (readonly, nonatomic) NSString *subscriptionURL;
@property (readonly, nonatomic) NSString *subscriptionURLWithUsername;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isManagedByServer;
@property (nonatomic) BOOL insecureConnectionApproved;
@property (retain, nonatomic) NSString *calDAVPath;
@property (nonatomic) BOOL filterAlarms;
@property (nonatomic) BOOL disableAlarms;
@property (nonatomic) BOOL filterAttachments;
@property (nonatomic) double refreshInterval;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *password;

- (void).cxx_destruct;
- (id)_dictionaryForAccountProperties;
- (id)dictionaryForAccountProperties;
- (id)dictionaryForParentAccountProperties;
- (id)initWithCalendarDirectory:(id)a0 subscriptionURL:(id)a1 username:(id)a2 principalUid:(id)a3;

@end
