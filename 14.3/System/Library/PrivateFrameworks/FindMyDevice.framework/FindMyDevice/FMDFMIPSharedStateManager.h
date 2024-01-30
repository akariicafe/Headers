@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FMDFMIPSharedStateManager : NSObject

@property (retain) NSURL *fmipSharedFileStaticURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)recalculateLostMode;
- (void)setFMiPActive:(BOOL)a0;
- (BOOL)fmipActive;
- (BOOL)_writeSharedInfo:(id)a0;
- (id)_readSharedInfo;
- (BOOL)_removeSharedInfo;
- (id)_fmipSharedFileURL;
- (unsigned long long)lostModeType;

@end
