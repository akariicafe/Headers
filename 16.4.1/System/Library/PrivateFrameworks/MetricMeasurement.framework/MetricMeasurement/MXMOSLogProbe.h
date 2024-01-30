@class NSArray, NSString, OSActivityStream;
@protocol MXMProbeableDevice;

@interface MXMOSLogProbe : MXMProbe <OSActivityStreamDelegate> {
    OSActivityStream *_activityStream;
}

@property (class, readonly, nonatomic) id<MXMProbeableDevice> hostDevice;
@property (class, readonly, nonatomic) NSArray *connectedDevices;
@property (class, readonly, nonatomic) MXMOSLogProbe *probeHostOSLog;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)streamDidStart:(id)a0;
- (void)streamDidStop:(id)a0;
- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (BOOL)activityStream:(id)a0 results:(id)a1;
- (void)streamDidFail:(id)a0 error:(id)a1;
- (id)initWithTargetDevice:(id)a0;

@end
