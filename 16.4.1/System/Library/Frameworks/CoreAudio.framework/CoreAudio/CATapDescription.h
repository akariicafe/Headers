@class NSString, NSArray;

@interface CATapDescription : NSObject {
    NSArray *_processes;
    BOOL _isMono;
}

@property (retain) NSString *name;
@property (retain) NSString *UUID;
@property BOOL isExclusive;
@property BOOL isAMixdown;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMono;
- (void)setIsMono:(BOOL)a0;
- (id)generateUID;
- (id)getProcesses;
- (id)initMonoGlobalTapButExcludeProcesses:(id)a0;
- (id)initMonoMixdownOfProcessesIDs:(id)a0;
- (id)initStereoGlobalTapButExcludeProcesses:(id)a0;
- (id)initStereoMixdownOfProcessesIDs:(id)a0;
- (id)initWithActiveStreamsForProcessDevicePairs:(id)a0;
- (id)initWithProcessDevicePairs:(id)a0;
- (void)setProcesses:(id)a0;

@end
