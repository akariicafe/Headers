@class AUAudioUnitBus, AVAudioPCMBuffer, NSObject, AUAudioUnitBusArray;
@protocol OS_dispatch_queue;

@interface RENetworkSourceAudioUnit : AUAudioUnit {
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AVAudioPCMBuffer *_inputBuffer;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    struct unique_ptr<REJitterBuffer, std::__1::default_delete<REJitterBuffer> > { struct __compressed_pair<REJitterBuffer *, std::__1::default_delete<REJitterBuffer> > { struct REJitterBuffer *__value_; } __ptr_; } _jitterBuffer;
    struct shared_ptr<REPacketEncoder> { struct REPacketEncoder *__ptr_; struct __shared_weak_count *__cntrl_; } _encoder;
    long long _targetLatency;
    struct unique_ptr<REEncodePayloadPool, std::__1::default_delete<REEncodePayloadPool> > { struct __compressed_pair<REEncodePayloadPool *, std::__1::default_delete<REEncodePayloadPool> > { struct REEncodePayloadPool *__value_; } __ptr_; } _payloadPool;
    struct unique_ptr<caulk::concurrent::messenger, std::__1::default_delete<caulk::concurrent::messenger> > { struct __compressed_pair<caulk::concurrent::messenger *, std::__1::default_delete<caulk::concurrent::messenger> > { struct messenger *__value_; } __ptr_; } _encoderMessenger;
    AVAudioPCMBuffer *_cannedRecordingBuffer;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _cannedRecordingMutex;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue;
@property (copy) id /* block */ sendCompressedBytes;
@property BOOL shortCircuit;
@property (nonatomic) BOOL cannedRecording;
@property (readonly) unsigned int jitterBufferSize;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) int samplesPerPacket;
@property (readonly, nonatomic) int droppedPacketRecoveryLimit;
@property (readonly, nonatomic) unsigned long long decodedSampleCount;

- (id)channelCapabilities;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (id)outputBusses;
- (id)inputBusses;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id /* block */)internalRenderBlock;
- (void)receiveCompressedBytes:(const char *)a0 size:(unsigned int)a1 timestamp:(double)a2;
- (void)receive:(id)a0 timestamp:(unsigned int)a1;
- (void)receive:(const char *)a0 size:(unsigned int)a1 timestamp:(unsigned int)a2;
- (void)receiveCompressedBytes:(id)a0 timestamp:(double)a1;
- (void)configureJitterBufferForTargetLatency:(long long)a0;

@end
