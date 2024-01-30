@class CUBLEAdvertiser, NSObject;
@protocol OS_dispatch_queue;

@interface CUOSRecoveryTarget : NSObject {
    BOOL _activateCalled;
    CUBLEAdvertiser *_bleAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void)_reportProgressType:(int)a0;
- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidated;
- (void)activate;
- (void)_invalidate;
- (void)invalidate;

@end
