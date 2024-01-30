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
- (void)beginUpdate;
- (void)_writeSharedMemoryWithAveragePower:(float)a0 peakPower:(float)a1;
- (void)_destroySharedMemory;
- (void)endUpdate;
- (void)_invalidate;
- (id)_createNewXPCWrapper;
- (float)_unsafePeakPower;
- (BOOL)_createSharedMemory;
- (void).cxx_destruct;
- (float)_unsafeAveragePower;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)_beginUpdate;
- (id)_createSharedMemoryXPCObject;
- (void)_endUpdate;
- (void)dealloc;
- (void)getPowerWithCompletion:(id /* block */)a0;
- (void)_updatePowerWithAveragePower:(float)a0 andPeakPower:(float)a1;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)a0;
- (void)_getPowerWithCompletion:(id /* block */)a0;
- (id)initWithProvider:(id)a0 queue:(id)a1 frequency:(long long)a2 delegate:(id)a3;

@end
