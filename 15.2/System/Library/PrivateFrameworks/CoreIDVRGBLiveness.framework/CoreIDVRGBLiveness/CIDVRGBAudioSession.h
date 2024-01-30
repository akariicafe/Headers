@class AVAudioPlayer, NSString, NSData, CHHapticEngine;

@interface CIDVRGBAudioSession : NSObject {
    NSData *_scanSound;
    NSData *_endSound;
    NSData *_completeSound;
    NSData *_failSound;
    NSData *_lockSound;
    AVAudioPlayer *_player;
    CHHapticEngine *_hapticEngine;
    NSString *_originalCategory;
}

+ (id)_loadSound:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (id)_createHapticEngine;
- (id)_createHapticEventWithType:(unsigned long long)a0 delay:(double)a1;
- (void)_playHapticEvents:(id)a0;
- (id)_dataForSound:(unsigned long long)a0;
- (void)_playHapticForSound:(unsigned long long)a0;
- (void)_playHapticEvent:(id)a0;
- (void)playSound:(unsigned long long)a0 loop:(BOOL)a1;

@end
