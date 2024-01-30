@class NSObject, NSHashTable, AFAccessibilityState;
@protocol OS_dispatch_queue;

@interface AFAccessibilityObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    AFAccessibilityState *_state;
    unsigned long long _stateDirtyFlags;
    NSHashTable *_listeners;
}

@property (readonly, copy, nonatomic) AFAccessibilityState *state;

+ (id)sharedObserver;

- (void)_updateVoiceOverTouchEnabledPreference;
- (void)_updateVibrationDisabledPreference;
- (id)currentState;
- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)getStateWithCompletion:(id /* block */)a0;
- (BOOL)_fetchIsVibrationDisabled;
- (void)voiceOverTouchEnabledPreferenceDidChange:(id)a0;
- (void)vibrationDisabledPreferenceDidChange:(id)a0;
- (BOOL)_fetchIsVoiceOverTouchEnabled;
- (void)_setState:(id)a0 clearDirtyFlags:(unsigned long long)a1;

@end
