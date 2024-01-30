@class NSObject;
@protocol OS_os_log;

@interface PCLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *usabilityMonitor;
@property (class, readonly) NSObject<OS_os_log> *wakeManager;
@property (class, readonly) NSObject<OS_os_log> *timer;
@property (class, readonly) NSObject<OS_os_log> *interfaceManager;

+ (id)logWithCategory:(const char *)a0;

@end
