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

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)nodeSubType;
- (void)_releaseResources;
- (void)addEmitSynchronizedSlaveSampleBufferSemaphore:(id)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)_setOverCaptureSynchronizedSlaveSemaphoreEnabled:(BOOL)a0;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)_ensureSemaphoresAreBalanced;
- (id)initWithSynchronizedSlaveAttachedMediaDecompressionEnabled:(BOOL)a0;
- (void)dealloc;
- (BOOL)downstreamIsSharingOutputPool;
- (void)setDownstreamIsSharingOutputPool:(BOOL)a0;
- (void)addEmitSampleBufferSemaphore:(id)a0;

@end
