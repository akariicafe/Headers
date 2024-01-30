@class AXUIClient, NSString;

@interface SpeakTypingServices : NSObject <AXUIClientDelegate>

@property (retain, nonatomic) AXUIClient *speakTypingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setLetterFeedbackEnabled:(BOOL)a0;
- (void)setPhoneticFeedbackEnabled:(BOOL)a0;
- (id)_clientIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)setWordFeedbackEnabled:(BOOL)a0;
- (BOOL)notifySpeakServicesToStopSpeaking;
- (BOOL)notifySpeakServicesForSpeechOutput:(id)a0 volume:(double)a1 speakingRate:(double)a2;
- (void)initializeServerConnection;
- (void)clearLastSpokenString;
- (void)setVoiceIdentifier:(id)a0 forLanguage:(id)a1;
- (id)lastUsedVoiceIdentifier;
- (id)lastSpokenString;
- (BOOL)verifyTestingConnection;
- (BOOL)notifySpeakServicesForAttributedSpeechOutput:(id)a0;
- (BOOL)notifySpeakServicesForSpeakAutoCorrections:(id)a0 forCurrentInputMode:(id)a1;
- (BOOL)notifySpeakServicesToFeedbackCharacter:(id)a0 forCurrentInputMode:(id)a1;
- (BOOL)notifySpeakServicesToFeedbackWord:(id)a0 forCurrentInputMode:(id)a1;
- (BOOL)notifySpeakServicesToFeedbackQuickTypePrediction:(id)a0 forCurrentInputMode:(id)a1;

@end
