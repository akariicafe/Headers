@class NSObject;
@protocol OS_os_log;

@interface MIOLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *defaultLog;

+ (BOOL)debugEnabled;
+ (void)recheckDebugEnabled;

@end
