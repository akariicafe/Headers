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

- (id)minimumRefreshInterval;
- (void)checkOnTask:(id)a0 activity:(id)a1;
- (BOOL)runTask:(id)a0;
- (void)scheduleDeviceDataProcessing:(double)a0;
- (void)processDeviceData:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
