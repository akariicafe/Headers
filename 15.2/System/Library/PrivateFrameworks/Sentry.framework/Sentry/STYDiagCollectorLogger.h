@class NSObject;
@protocol OS_os_log;

@interface STYDiagCollectorLogger : NSObject

@property (retain) NSObject<OS_os_log> *logHandle;

+ (id)sharedLogger;

- (void).cxx_destruct;

@end
