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

- (void)removeListener:(id)a0;
- (void)getStateWithCompletion:(id /* block */)a0;
- (id)currentState;
- (void)voiceOverTouchEnabledPreferenceDidChange:(id)a0;
- (void)vibrationDisabledPreferenceDidChange:(id)a0;
- (BOOL)_fetchIsVoiceOverTouchEnabled;
- (BOOL)_fetchIsVibrationDisabled;
- (void)_setState:(id)a0 clearDirtyFlags:(unsigned long long)a1;
- (void)_updateVoiceOverTouchEnabledPreference;
- (void)_updateVibrationDisabledPreference;
- (void)addListener:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
