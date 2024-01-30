@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface STYDiagnosticsCollector : NSObject

@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue;
@property (retain) NSObject<OS_os_log> *logger;

+ (id)sharedDiagnosticsCollector;

- (void).cxx_destruct;
- (void)collectTailspinForScenarioReport:(id)a0 tailspinFileDescriptor:(int)a1 completionHandler:(id /* block */)a2;

@end
