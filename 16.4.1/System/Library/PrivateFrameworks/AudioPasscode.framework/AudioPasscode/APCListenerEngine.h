@class AUPasscodeCodecConfiguration, AVAudioSession, AVAudioEngine, AVAudioUnit, AUPasscodeDecoder;

@interface APCListenerEngine : NSObject {
    AVAudioSession *_session;
    AVAudioEngine *_engine;
    AVAudioUnit *_decoderAUNode;
    AUPasscodeDecoder *_decoderAU;
    AUPasscodeCodecConfiguration *_codecConfig;
}

+ (id)listenerWithCodecConfig:(id)a0 queue:(id)a1 dataReceivedHandler:(id /* block */)a2 error:(id *)a3;
+ (id)listenerWithCodecConfig:(id)a0 queue:(id)a1 dataReceivedHandler:(id /* block */)a2 resultData:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (void)setupAudioSession;
- (id)initWithCodecConfig:(id)a0 queue:(id)a1 dataReceivedHandler:(id /* block */)a2 resultData:(id)a3 error:(id *)a4;
- (void)makeEngineConnectionsWithError:(id *)a0;
- (id)createAU:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;
- (void)createEngineAndAttachNodes;
- (void)startEngineWithError:(id *)a0;
- (void)stopEngine;
- (BOOL)validateInputNodeWithFormat:(id)a0;

@end
