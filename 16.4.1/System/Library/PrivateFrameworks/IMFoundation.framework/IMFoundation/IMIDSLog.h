@class NSObject;
@protocol OS_os_log;

@interface IMIDSLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *encryption;
@property (class, readonly) NSObject<OS_os_log> *daemon;
@property (class, readonly) NSObject<OS_os_log> *daemon_oversized;
@property (class, readonly) NSObject<OS_os_log> *dataDetector;
@property (class, readonly) NSObject<OS_os_log> *activityMonitor;
@property (class, readonly) NSObject<OS_os_log> *security;
@property (class, readonly) NSObject<OS_os_log> *URLLoading;
@property (class, readonly) NSObject<OS_os_log> *timer;
@property (class, readonly) NSObject<OS_os_log> *XPC;

@end
