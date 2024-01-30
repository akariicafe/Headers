@class NSObject;
@protocol OS_os_log;

@interface TSTPerformanceLogging : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

+ (id)logForCategory:(const char *)a0;

@end
