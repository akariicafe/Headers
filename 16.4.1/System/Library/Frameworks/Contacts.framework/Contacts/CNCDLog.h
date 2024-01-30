@class NSObject;
@protocol OS_os_log;

@interface CNCDLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *saving;

@end
