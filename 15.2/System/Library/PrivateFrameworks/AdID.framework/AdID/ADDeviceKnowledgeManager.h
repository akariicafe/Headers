@class NSNumber, NSString, ADBackgroundTaskRequest;

@interface ADDeviceKnowledgeManager : ADSingleton <BackgroundTaskDelegate>

@property (nonatomic) BOOL taskIsRunning;
@property (retain, nonatomic) ADBackgroundTaskRequest *xpc_task;
@property (retain, nonatomic) NSNumber *refreshInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)processDeviceData:(id /* block */)a0;
- (void)checkOnTask:(id)a0 activity:(id)a1;
- (BOOL)runTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)scheduleDeviceDataProcessing:(double)a0;

@end
