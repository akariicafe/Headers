@class NSString, NSArray;

@interface CATapDescription : NSObject {
    NSArray *_processes;
    BOOL _isMono;
}

@property (retain) NSString *name;
@property (retain) NSString *UUID;
@property (retain) NSString *preferredClockDevice;
@property (readonly) BOOL isExclusive;
@property (readonly) BOOL isAMixdown;

- (BOOL)isMono;
- (void).cxx_destruct;
- (id)initWithProcessDevicePairs:(id)a0;
- (id)initWithActiveStreamsForProcessDevicePairs:(id)a0;
- (id)initStereoMixdownOfProcessesIDs:(id)a0;
- (id)initMonoMixdownOfProcessesIDs:(id)a0;
- (id)initStereoGlobalTapButExcludeProcesses:(id)a0;
- (id)initMonoGlobalTapButExcludeProcesses:(id)a0;
- (id)generateUID;
- (id)getProcesses;

@end
