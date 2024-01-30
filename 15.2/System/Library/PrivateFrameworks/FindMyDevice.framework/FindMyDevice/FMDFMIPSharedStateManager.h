@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FMDFMIPSharedStateManager : NSObject

@property (retain) NSURL *fmipSharedFileStaticURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue;

+ (id)sharedInstance;

- (void)recalculateLostMode;
- (id)_fmipSharedFileURL;
- (id)_readSharedInfo;
- (BOOL)_writeSharedInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)_removeSharedInfo;
- (id)init;
- (BOOL)fmipActive;
- (void)setFMiPActive:(BOOL)a0;
- (unsigned long long)lostModeType;

@end
