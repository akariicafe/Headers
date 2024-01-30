@class NSData, NSObject;
@protocol OS_xpc_object;

@interface CSAudioChunk : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long numChannels;
@property (readonly, nonatomic) unsigned long long numSamples;
@property (readonly, nonatomic) unsigned long long sampleByteDepth;
@property (readonly, nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) unsigned long long hostTime;
@property (readonly, nonatomic) unsigned long long arrivalHostTimeToAudioRecorder;
@property (readonly, nonatomic) BOOL wasBuffered;
@property (readonly, nonatomic) BOOL remoteVADAvailable;
@property (retain, nonatomic) NSData *remoteVAD;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)dataForChannel:(unsigned long long)a0;
- (id)chunkForChannel:(unsigned long long)a0;
- (unsigned long long)copySubAudioChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 to:(void *)a2 dstBufferSize:(unsigned long long)a3;
- (id)dataWithRemoteVADWithScaleFactor:(float)a0 numAudioSamplesPerRemoteVAD:(unsigned long long)a1;
- (id)gainCompensatedChunk;
- (id)initWithData:(id)a0 numChannels:(unsigned long long)a1 numSamples:(unsigned long long)a2 sampleByteDepth:(unsigned long long)a3 startSampleCount:(unsigned long long)a4 hostTime:(unsigned long long)a5 arrivalHostTimeToAudioRecorder:(unsigned long long)a6 wasBuffered:(BOOL)a7 remoteVAD:(id)a8;
- (id)initWithData:(id)a0 numChannels:(unsigned long long)a1 numSamples:(unsigned long long)a2 sampleByteDepth:(unsigned long long)a3 startSampleCount:(unsigned long long)a4 hostTime:(unsigned long long)a5 remoteVAD:(id)a6;
- (id)remoteVADSubChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 numAudioSamplesPerRemoteVAD:(unsigned long long)a2;
- (void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)a0 reachesACountOf:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)a0 reachesACountOf:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)subChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1;
- (id)subChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 forChannel:(unsigned long long)a2;

@end
