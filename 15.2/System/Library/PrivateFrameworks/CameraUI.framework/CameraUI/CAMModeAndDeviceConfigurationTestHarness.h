@class NSMutableArray;

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness

@property (readonly, nonatomic) NSMutableArray *_modeChangeListeners;

- (void)handleDidOpenViewfinderForReason:(long long)a0;
- (void).cxx_destruct;
- (void)handleWillCloseViewfinderForReason:(long long)a0;
- (void)handleDidCloseViewfinderForReason:(long long)a0;
- (void)handleWillOpenViewfinderForReason:(long long)a0;
- (void)handleChangeToMode:(long long)a0 device:(long long)a1;
- (id)initWithTestName:(id)a0;
- (void)registerHandler:(id /* block */)a0 forChangeToMode:(long long)a1 devicePosition:(long long)a2;

@end
