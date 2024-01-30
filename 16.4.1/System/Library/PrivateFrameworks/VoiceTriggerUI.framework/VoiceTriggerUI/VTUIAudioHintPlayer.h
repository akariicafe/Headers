@class VTUISpeechSynthesizer, NSArray, NSString, NSTimer, AFVoiceInfo;

@interface VTUIAudioHintPlayer : NSObject {
    NSTimer *_timer;
}

@property (retain, nonatomic) VTUISpeechSynthesizer *synth;
@property (nonatomic) BOOL shouldSpeakAudioHint;
@property (retain, nonatomic) NSArray *trainingPageAudioHintInstructions;
@property (retain, nonatomic) NSArray *trainingPageAudioHintFiles;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) AFVoiceInfo *outputVoice;

- (void)cleanup;
- (void)_timerFired;
- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;
- (id)_audioHintPathForFileName:(id)a0;
- (id)_getTrainingPageAudioHintFiles;
- (BOOL)_hasValidHints;
- (void)_setupHints;
- (BOOL)_systemLanguageMatchesSiriLanguage:(id)a0 siriLanguage:(id)a1;
- (void)speakAudioHint:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)speakConfirmationDialog:(id /* block */)a0;

@end
