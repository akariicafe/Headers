@class NSData, NSObject;
@protocol OS_xpc_object;

@interface CSAudioChunk : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long numChannels;
@property (readonly, nonatomic) unsigned long long numSamples;
@property (readonly, nonatomic) unsigned long long sampleByteDepth;
@property (readonly, nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) unsigned long long hostTime;
@property (readonly, nonatomic) BOOL remoteVADAvailable;
@property (retain, nonatomic) NSData *remoteVAD;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)initWithData:(id)a0 numChannels:(unsigned long long)a1 numSamples:(unsigned long long)a2 sampleByteDepth:(unsigned long long)a3 startSampleCount:(unsigned long long)a4 hostTime:(unsigned long long)a5 remoteVAD:(id)a6;
- (id)subChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1;
- (id)gainCompensatedChunk;
- (id)dataForChannel:(unsigned long long)a0;
- (id)dataWithRemoteVADWithScaleFactor:(float)a0 numAudioSamplesPerRemoteVAD:(unsigned long long)a1;
- (void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)a0 reachesACountOf:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)remoteVADSubChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 numAudioSamplesPerRemoteVAD:(unsigned long long)a2;
- (id)chunkForChannel:(unsigned long long)a0;
- (id)subChunkFrom:(unsigned long long)a0 numSamples:(unsigned long long)a1 forChannel:(unsigned long long)a2;
- (void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)a0 reachesACountOf:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
