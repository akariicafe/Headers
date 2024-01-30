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

- (void)_cleanupToneAlertForSound:(id)a0 andKill:(BOOL)a1;
- (BOOL)playSound:(id)a0 environments:(long long)a1 completion:(id /* block */)a2;
- (BOOL)handleVolumeButtonDownEvent;
- (BOOL)stopSound:(id)a0;
- (BOOL)isPlayingAnySound;
- (void)addObserver:(id)a0;
- (BOOL)_playFeedback:(id)a0;
- (BOOL)stopAllSounds;
- (BOOL)isPlaying:(id)a0;
- (BOOL)_playSystemSound:(id)a0;
- (BOOL)_playToneAlert:(id)a0;
- (void)_endPendingCallbacksBlock;
- (void)removeObserver:(id)a0;
- (void)_cleanupSystemSound:(unsigned int)a0 andKill:(BOOL)a1;
- (void)_soundDidStartPlaying:(id)a0;
- (void)_soundDidFinishPlaying:(id)a0;
- (id)init;
- (void)_ringerStateChanged:(id)a0;
- (void)_beginPendingCallbacksBlock;
- (void).cxx_destruct;
- (BOOL)playSoundWithDefaultEnvironment:(id)a0;
- (void)_enqueueCallback:(id /* block */)a0;

@end
