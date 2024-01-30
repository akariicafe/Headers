@class BWDataBufferPool, BWNodeInput, NSMutableArray;

@interface BWTimeOfFlightSynchronizerNode : BWNode {
    int _numEODMessagesReceived;
    double _lastEmittedPTS;
    NSMutableArray *_pointCloudBufferQueue;
    NSMutableArray *_videoBufferQueue;
    struct opaqueCMFormatDescription { } *_pointCloudFormatDescription;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
    int _maxVideoBufferQueueDepth;
    int _maxPointCloudBufferQueueDepth;
    BWDataBufferPool *_dataBufferPool;
}

@property (readonly) BWNodeInput *videoInput;
@property (readonly) BWNodeInput *pointCloudInput;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)init;
- (void)dealloc;
- (void)_tryToEmitBuffers;
- (BOOL)_attachPointCloudsToSampleBufferOrReportMissing:(struct opaqueCMSampleBuffer { } *)a0 pointCloudsAreMissing:(BOOL *)a1;
- (void)_cleanupPointCloudBufferQueue;
- (BOOL)_mergePointClouds:(id)a0 intoDataBuffer:(struct __CVBuffer { } *)a1;
- (id)_bufferArrayToString:(id)a0;

@end
