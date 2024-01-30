@class OS_os_log;

@interface VisualIntelligence.VisualIntelligenceLogger : NSObject

@property (class, nonatomic, readonly) OS_os_log *osLog;

+ (void)logError:(id)a0 file:(id)a1;
+ (void)log:(id)a0 file:(id)a1;
+ (void)logDebug:(id)a0 file:(id)a1;
+ (void)logErrorIfExisting:(id)a0 error:(id)a1 file:(id)a2;

- (void).cxx_destruct;
- (id)init;

@end
