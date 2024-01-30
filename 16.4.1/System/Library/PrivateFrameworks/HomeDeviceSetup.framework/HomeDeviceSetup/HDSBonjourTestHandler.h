@class SFSession, CUBonjourAdvertiser, NSObject;
@protocol OS_dispatch_queue;

@interface HDSBonjourTestHandler : NSObject {
    CUBonjourAdvertiser *_advertiser;
    BOOL _invalidateCalled;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleStart:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleStop:(id)a0 responseHandler:(id /* block */)a1;

@end
