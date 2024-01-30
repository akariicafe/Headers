@class MNUserOptions, NSString, MNObserverHashTable, MNAudioHardwareEngine;

@interface MNAudioManager : NSObject <MNAudioHardwareEngineObserver, MNAudioProvider> {
    MNObserverHashTable *_observers;
    MNUserOptions *_options;
    MNAudioHardwareEngine *_audioEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) unsigned long long voiceGuidanceLevel;

- (BOOL)isSpeaking;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopSpeaking;
- (void)audioHardwareEngine:(id)a0 didActivateAudioSession:(BOOL)a1;
- (void)audioHardwareEngine:(id)a0 didStartSpeakingPrompt:(id)a1;
- (double)durationOf:(id)a0;
- (void)changeTransportType:(int)a0;
- (BOOL)vibrateForShortPrompt:(unsigned long long)a0;
- (BOOL)voiceGuidanceEnabled;
- (void)speak:(id)a0 withVoiceGuidanceLevel:(unsigned long long)a1 andCondition:(unsigned long long)a2 usingShortPrompt:(unsigned long long)a3 thenCallCompletion:(id /* block */)a4;
- (id)initWithTransportType:(int)a0 andVoiceGuidanceLevel:(unsigned long long)a1 andVoiceLanguage:(id)a2;
- (void)didChangeUserOptionsFrom:(id)a0 to:(id)a1;
- (void)clearAllAnnouncements;
- (void)changeVoiceGuidanceLevel:(unsigned long long)a0 forTransportType:(int)a1;
- (int)_supportedTransportTypeForTransportType:(int)a0;
- (void)_changeVoiceGuidanceLevel:(unsigned long long)a0 forTransportType:(int)a1;
- (void)_pushAudioSystemOptionsFromUserOptions:(id)a0;
- (BOOL)_deviceSettingsAllowSpeech;
- (BOOL)_deviceIsMuted;

@end
