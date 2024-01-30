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

- (void)_activate;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_reportProgressType:(int)a0;

@end
