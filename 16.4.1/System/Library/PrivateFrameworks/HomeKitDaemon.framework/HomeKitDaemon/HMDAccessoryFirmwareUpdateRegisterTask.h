@interface HMDAccessoryFirmwareUpdateRegisterTask : HMDAccessoryFirmwareUpdateTask {
    BOOL _userInitiated;
}

- (void)run;
- (BOOL)isUserInitiated;
- (id)criteria;
- (BOOL)shouldRun;
- (id)initWithSession:(id)a0 profile:(id)a1 initialDelay:(double)a2;

@end
