@interface HMDAccessoryFirmwareUpdateRecoverTask : HMDAccessoryFirmwareUpdateTask

- (id)criteria;
- (void)run;
- (BOOL)shouldRun;
- (id)initWithSession:(id)a0 profile:(id)a1 delay:(BOOL)a2;

@end
