@class NSObject;
@protocol OS_os_log;

@interface REMLog : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *xpc;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *changeTracking;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *editor;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *ui;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *crdt;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *alarmEngine;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *timelineEngine;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *housekeepingingActivityScheduler;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *extraneousAlarmCleaner;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *inlineTagAutoConvertEngine;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *templates;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *accountPlugin;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *utility;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *suggestedAttributes;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *cloudkit;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *cloudkitCollaboration;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *migration;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *dataAccess;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *userAction;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *siriKit;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *applicationShortcut;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *notification;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *account;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *analytics;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *ppt;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *scripting;

+ (id)search;

@end
