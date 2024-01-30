@class NviContext, NSString, CSAudioStream, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NviCSAudioDataSource : NSObject <CSAudioStreamProvidingDelegate, NviAudioDataSource>

@property (retain, nonatomic) NviContext *nviCtx;
@property (retain, nonatomic) NSHashTable *receivers;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long sampleRate;
@property (readonly, nonatomic) unsigned long long numBytesPerSample;
@property (readonly, nonatomic) unsigned long long type;

- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectly:(long long)a1;
- (void)removeReceiver:(id)a0;
- (void)_createAudioStreamWithCurrentNviContext;
- (void)addReceiver:(id)a0;
- (void)audioStreamProvider:(id)a0 avBufferAvailable:(id)a1;
- (void)startWithNviContext:(id)a0 didStartHandler:(id /* block */)a1;
- (void)stopWithDidStopHandler:(id /* block */)a0;

@end
