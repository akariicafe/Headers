@class NSString, NSArray;

@interface AVControlCenterModuleState : NSObject {
    NSString *_bundleID;
    BOOL _isVOIPApp;
    BOOL _isOptedInForBackgroundBlur;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _holdingStateLock;
    BOOL _centerStageSupported;
    long long _centerStageControlMode;
    BOOL _centerStageEnabled;
    NSString *_centerStageControlModeKey;
    NSString *_centerStageEnabledKey;
    NSString *_centerStageUnavailableReasonsKey;
    BOOL _backgroundBlurSupported;
    long long _backgroundBlurControlMode;
    BOOL _backgroundBlurEnabled;
    NSString *_backgroundBlurControlModeKey;
    NSString *_backgroundBlurEnabledKey;
    NSString *_backgroundBlurUnavailableReasonsKey;
    BOOL _micModesSupported;
    BOOL _auVoiceIOBypassVoiceProcessing;
    NSString *_auVoiceIOBypassVoiceProcessingKey;
    long long _microphoneMode;
    long long _activeMicrophoneMode;
    NSString *_microphoneModeKey;
    NSString *_activeMicrophoneModeKey;
    NSArray *_supportedMicrophoneModes;
    NSString *_supportedMicrophoneModesKey;
}

@property (readonly, getter=isActive) BOOL active;
@property BOOL centerStageSupported;
@property BOOL backgroundBlurSupported;
@property BOOL micModesSupported;

+ (id)moduleStateForBundleID:(id)a0 micModesSupported:(BOOL)a1;

- (BOOL)voiceProcessingBypassed;
- (BOOL)isEnabledForVideoEffect:(id)a0;
- (long long)microphoneMode;
- (id)initForBundleID:(id)a0 micModesSupported:(BOOL)a1;
- (long long)activeMicrophoneMode;
- (id)supportedMicrophoneModes;
- (BOOL)supportsVideoEffect:(id)a0;
- (void)_proprietaryDefaultChanged:(id)a0 keyPath:(id)a1 context:(void *)a2;
- (BOOL)setEnabled:(BOOL)a0 forVideoEffect:(id)a1;
- (void)dealloc;
- (unsigned long long)unavailableReasonsForVideoEffect:(id)a0;
- (long long)controlModeForVideoEffect:(id)a0;
- (BOOL)setMicrophoneMode:(long long)a0;

@end
