@class NSURL, NSString;

@interface CalCalendarMigrationSubscriptionInfo : NSObject

@property (readonly, nonatomic) NSURL *calendarDirectory;
@property (readonly, nonatomic) NSString *principalUid;
@property (readonly, nonatomic) NSString *subscriptionURL;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isManagedByServer;
@property (nonatomic) BOOL insecureConnectionApproved;
@property (retain, nonatomic) NSString *calDAVPath;
@property (nonatomic) BOOL filterAlarms;
@property (nonatomic) BOOL disableAlarms;
@property (nonatomic) BOOL filterAttachments;
@property (nonatomic) double refreshInterval;

- (void).cxx_destruct;
- (id)dictionaryForAccountProperties;
- (id)initWithCalendarDirectory:(id)a0 subscriptionURL:(id)a1 principalUid:(id)a2;

@end
