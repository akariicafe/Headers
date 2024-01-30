@class NSDictionary, NSObject;
@protocol OS_os_log;

@interface STUILog : NSObject

@property (class, readonly, nonatomic) NSDictionary *logCategories;
@property (class, readonly) NSObject<OS_os_log> *accessList;
@property (class, readonly) NSObject<OS_os_log> *apps;
@property (class, readonly) NSObject<OS_os_log> *budgets;
@property (class, readonly) NSObject<OS_os_log> *alwaysAllowed;
@property (class, readonly) NSObject<OS_os_log> *communication;
@property (class, readonly) NSObject<OS_os_log> *communicationSafety;
@property (class, readonly) NSObject<OS_os_log> *contentPrivacy;
@property (class, readonly) NSObject<OS_os_log> *persistence;
@property (class, readonly) NSObject<OS_os_log> *usage;
@property (class, readonly) NSObject<OS_os_log> *icons;
@property (class, readonly) NSObject<OS_os_log> *requests;
@property (class, readonly) NSObject<OS_os_log> *users;
@property (class, readonly) NSObject<OS_os_log> *childSetup;

@end
