@class NSObject;
@protocol OS_os_log;

@interface STYScenarioReportLogger : NSObject

@property (retain) NSObject<OS_os_log> *logHandle;

+ (id)sharedLogger;

- (void).cxx_destruct;

@end
