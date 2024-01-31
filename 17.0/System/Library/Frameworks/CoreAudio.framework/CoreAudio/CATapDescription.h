@class NSString, NSUUID, NSArray, NSNumber;

@interface CATapDescription : NSObject

@property (copy) NSString *name;
@property (copy) NSUUID *UUID;
@property (copy) NSArray *processes;
@property (getter=isMono) BOOL mono;
@property (getter=isExclusive) BOOL exclusive;
@property (getter=isMixdown) BOOL mixdown;
@property (getter=isPrivate, setter=setPrivate:) BOOL privateTap;
@property (getter=isMuted) long long muteBehavior;
@property (copy) NSString *deviceUID;
@property (copy) NSNumber *stream;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)setIsExclusive:(BOOL)a0;
- (id)initMonoGlobalTapButExcludeProcesses:(id)a0;
- (id)initMonoMixdownOfProcesses:(id)a0;
- (id)initMonoMixdownOfProcessesIDs:(id)a0;
- (id)initStereoGlobalTapButExcludeProcesses:(id)a0;
- (id)initStereoMixdownOfProcesses:(id)a0;
- (id)initStereoMixdownOfProcessesIDs:(id)a0;
- (id)initWithProcesses:(id)a0 andDeviceUID:(id)a1 withStream:(long long)a2;

@end
