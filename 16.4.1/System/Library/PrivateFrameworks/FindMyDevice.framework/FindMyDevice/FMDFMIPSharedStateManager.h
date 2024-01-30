@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FMDFMIPSharedStateManager : NSObject

@property (retain) NSURL *fmipSharedFileStaticURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue;

+ (id)sharedInstance;

- (BOOL)_writeSharedInfo:(id)a0;
- (id)_fmipSharedFileURL;
- (void)setFMiPActive:(BOOL)a0;
- (unsigned long long)lostModeType;
- (BOOL)_removeSharedInfo;
- (BOOL)fmipActive;
- (id)init;
- (void)recalculateLostMode;
- (void).cxx_destruct;
- (id)_readSharedInfo;

@end
