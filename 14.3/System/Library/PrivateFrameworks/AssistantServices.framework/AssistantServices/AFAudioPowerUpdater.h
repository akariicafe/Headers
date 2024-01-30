@class NSObject;
@protocol AFAudioPowerProviding, AFAudioPowerUpdaterDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface AFAudioPowerUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<AFAudioPowerUpdaterDelegate> _delegate;
    void *_sharedMemory;
    float _averagePower;
    float _peakPower;
}

@property (readonly, nonatomic) id<AFAudioPowerProviding> provider;
@property (readonly, nonatomic) long long frequency;

- (void)_timerFired;
- (void).cxx_destruct;
- (void)dealloc;
- (float)_unsafeAveragePower;
- (float)_unsafePeakPower;
- (void)endUpdate;
- (void)_invalidate;
- (void)_beginUpdate;
- (void)_getPowerWithCompletion:(id /* block */)a0;
- (void)_endUpdate;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)_destroySharedMemory;
- (BOOL)_createSharedMemory;
- (id)_createNewXPCWrapper;
- (id)_createSharedMemoryXPCObject;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)beginUpdate;
- (void)invalidate;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;

@end
