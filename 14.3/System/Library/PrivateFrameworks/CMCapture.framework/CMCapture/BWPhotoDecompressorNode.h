@class BWPhotoDecompressor, NSMutableArray, NSMutableSet;

@interface BWPhotoDecompressorNode : BWNode {
    BOOL _downstreamIsSharingOutputPool;
    BOOL _synchronizedSlaveAttachedMediaDecompressionEnabled;
    BWPhotoDecompressor *_photoDecompressor;
    BWPhotoDecompressor *_synchronizedSlavePhotoDecompressor;
    NSMutableArray *_emitSampleBufferSemaphores;
    NSMutableArray *_emitSynchronizedSlaveSampleBufferSemaphores;
    NSMutableSet *_disabledSynchronizedSlaveSemaphores;
    int _numberOfTimesWaited;
    int _numberOfBuffersEmitted;
    int _numberOfTimesSynchronizedSlaveWaited;
    int _numberOfSynchronizedSlaveBuffersEmitted;
}

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)_releaseResources;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeType;
- (BOOL)downstreamIsSharingOutputPool;
- (void)_ensureSemaphoresAreBalanced;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)addEmitSampleBufferSemaphore:(id)a0;
- (void)setDownstreamIsSharingOutputPool:(BOOL)a0;
- (void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)a0;
- (id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)a0;
- (void)_setOverCaptureSynchronizedSlaveSemaphoreEnabled:(BOOL)a0;

@end
