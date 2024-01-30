@class NSMutableDictionary, NSMapTable, NSMutableSet, NSHashTable, UINotificationFeedbackGenerator, NSMutableArray;

@interface SBSoundController : NSObject {
    NSMutableDictionary *_soundsBySystemSoundIDs;
    NSMutableSet *_usedNotificationTypes;
    UINotificationFeedbackGenerator *_hapticFeedbackGenerator;
    NSMapTable *_toneAlertsBySounds;
    NSMapTable *_soundsByToneAlerts;
    NSHashTable *_observers;
    unsigned long long _pendingCallbacks;
    NSMutableArray *_pendedCallbacks;
}

+ (id)sharedInstance;

- (void)_ringerStateChanged:(id)a0;
- (BOOL)playSound:(id)a0 environments:(long long)a1 completion:(id /* block */)a2;
- (void)_enqueueCallback:(id /* block */)a0;
- (void)_cleanupSystemSound:(unsigned int)a0 andKill:(BOOL)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)stopSound:(id)a0;
- (BOOL)_playToneAlert:(id)a0;
- (BOOL)isPlayingAnySound;
- (BOOL)stopAllSounds;
- (void)_endPendingCallbacksBlock;
- (BOOL)playSoundWithDefaultEnvironment:(id)a0;
- (BOOL)isPlaying:(id)a0;
- (void).cxx_destruct;
- (BOOL)_playFeedback:(id)a0;
- (id)init;
- (BOOL)_playSystemSound:(id)a0;
- (BOOL)handleVolumeButtonDownEvent;
- (void)_soundDidFinishPlaying:(id)a0;
- (void)_cleanupToneAlertForSound:(id)a0 andKill:(BOOL)a1;
- (void)_soundDidStartPlaying:(id)a0;
- (void)_beginPendingCallbacksBlock;

@end
