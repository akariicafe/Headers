@class NSObject, AVAudioEngine, AVAudioPlayerNode, AVAudioPCMBuffer;
@protocol OS_dispatch_queue;

@interface BKUIPearlAudioSession : NSObject {
    AVAudioPlayerNode *_audioNode;
    NSObject<OS_dispatch_queue> *_avPlayerNodeOperationQueue;
    BOOL _mediaServicesConnected;
}

@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioPCMBuffer *lockSoundBuffer;
@property (readonly, nonatomic) AVAudioPCMBuffer *scanSoundBuffer;
@property (readonly, nonatomic) AVAudioPCMBuffer *completeSoundBuffer;
@property (readonly, nonatomic) AVAudioPCMBuffer *endSoundBuffer;
@property (readonly, nonatomic) AVAudioPCMBuffer *failSoundBuffer;

+ (id)_loadSound:(id)a0;

- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)play;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)_mediaServicesConnectionWasLost:(id)a0;
- (void)_mediaServicesReconnect:(id)a0;
- (id)_setupMediaStack;

@end
