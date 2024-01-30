@class NSString;

@interface RBAssertionOriginatorPidStore : NSObject <RBAssertionOriginatorPidPersisting, RBStateCapturing> {
    struct { unsigned int x0; unsigned int x1; unsigned int x2; } *_header;
    NSString *_path;
    int *_pids;
    int _headerID;
    int _pidsID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsPid:(int)a0;
- (id)captureState;
- (void)dealloc;
- (BOOL)isValid;
- (void)removePid:(int)a0;
- (void)setValidProcesses:(id)a0;
- (void)addPid:(int)a0;

@end
