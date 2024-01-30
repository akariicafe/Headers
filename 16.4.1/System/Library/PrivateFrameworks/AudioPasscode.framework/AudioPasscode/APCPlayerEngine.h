@class AVAudioSession, AVAudioPlayerNode, AVAudioPCMBuffer, NSObject, AVAudioEngine, AVAudioUnit, AUPasscodeEncoder, APCPlayerEmbedInfo;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APCPlayerEngine : NSObject {
    AVAudioSession *_session;
    AVAudioEngine *_engine;
    AVAudioUnit *_encoderAUNode;
    AUPasscodeEncoder *_encoderAU;
    AVAudioPlayerNode *_player;
    AVAudioPCMBuffer *_assetBuffer;
    BOOL _isRunning;
    float _prePlayVolume;
    BOOL _requestingStop;
    NSObject<OS_dispatch_source> *_callbackDispatchSrc;
}

@property (copy, nonatomic) id /* block */ beginningCallback;
@property (copy, nonatomic) id /* block */ stopEngineCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) APCPlayerEmbedInfo *embeddingInfo;

+ (id)playerWithAssetURL:(id)a0 codecConfig:(id)a1 payload:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)startEngine;
- (void)setupAudioSession;
- (void)_playbackBufferLoopCompletionHdlr;
- (void)_stopAudioEngineAndSession;
- (id)createAU:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;
- (void)createEngineAndAttachNodes;
- (void)endPasscodeEmbedding;
- (float)evaluateAsset;
- (id)initWithAssetURL:(id)a0 codecConfig:(id)a1 payload:(id)a2 error:(id *)a3;
- (void)makeEngineConnections;
- (void)startAPCPlayLoop;
- (void)startAPCPlayLoopAtTime:(unsigned long long)a0;
- (BOOL)startEngineAtTime:(unsigned long long)a0;
- (BOOL)startEngineAtTime:(unsigned long long)a0 withBeginning:(id /* block */)a1;
- (BOOL)startEngineAtTime:(unsigned long long)a0 withBeginning:(id /* block */)a1 callbackTime:(unsigned long long)a2;
- (void)stopEngine:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)stopEngineAfterMinimumLoops:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)stopEngineWithFadeOut:(float)a0 completion:(id /* block */)a1;

@end
