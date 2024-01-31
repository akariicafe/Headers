@class NSURL, NSDictionary, CHHapticEngine;
@protocol CHHapticAdvancedPatternPlayerExtended;

@interface SSCoreHapticsPlayer : NSObject {
    id<CHHapticAdvancedPatternPlayerExtended> _audioPlayer;
    id<CHHapticAdvancedPatternPlayerExtended> _hapticPlayer;
    NSURL *_audioURL;
    unsigned long long _audioResourceID;
    NSDictionary *_hapticPatternDict;
    double _audioPatternDuration;
    double _hapticPatternDuration;
    unsigned int _clientCompletionToken;
    BOOL _shouldPlayAudioFinal;
    BOOL _shouldPlayHapticsFinal;
    BOOL _audioPlaybackFinished;
    BOOL _hapticPlaybackFinished;
}

@property (readonly) CHHapticEngine *engine;
@property (readonly) unsigned long long ssid;

- (void)stop:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)prewarm:(BOOL)a0;
- (BOOL)createAudioPlayerAndReturnError:(id *)a0;
- (unsigned long long)createAudioResource:(id)a0 error:(id *)a1;
- (void)createHapticPlayer:(id)a0 error:(id *)a1;
- (BOOL)doInit:(id)a0 haptic:(id)a1 error:(id *)a2;
- (id)getHapticDictionaryFromURL:(id)a0;
- (void)handleFinish;
- (id)initWithAudio:(id)a0 haptic:(id)a1 error:(id *)a2;
- (id)initWithAudio:(id)a0 hapticDictionary:(id)a1 error:(id *)a2;
- (BOOL)playWithOptions:(id)a0 completionCallbackToken:(unsigned int)a1 error:(id *)a2;
- (BOOL)prepareHapticPatternFromPlayOptions:(id)a0;
- (void)registerCompletionAndStop;
- (void)registerCompletionPortion:(BOOL)a0;
- (id)setupDefaultEngineConfigBlock;
- (void)setupLooping;
- (BOOL)startPlayerAtTime:(double)a0 forAudio:(BOOL)a1 error:(id *)a2;

@end
