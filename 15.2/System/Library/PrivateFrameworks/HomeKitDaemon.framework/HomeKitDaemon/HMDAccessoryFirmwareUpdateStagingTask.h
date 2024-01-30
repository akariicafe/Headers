@interface HMDAccessoryFirmwareUpdateStagingTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}

- (void)run;
- (id)criteria;
- (BOOL)isUserInitiated;
- (BOOL)shouldRun;
- (id)initWithSession:(id)a0 profile:(id)a1 userInitiated:(BOOL)a2 delay:(BOOL)a3;

@end
