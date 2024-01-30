@class NSObject;
@protocol OS_os_log;

@interface CNLogging : NSObject

@property (class, readonly) NSObject<OS_os_log> *notificationOSLog;
@property (class, readonly) NSObject<OS_os_log> *apiUsageLog;
@property (class, readonly) NSObject<OS_os_log> *sdkBreakageLog;

@end
