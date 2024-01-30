@interface ContactlessReaderUI.VoiceSynthPlayer : NSObject <AVSpeechSynthesizerDelegate> {
    void /* unknown type, empty encoding */ audioPlayerDelegate;
    void /* unknown type, empty encoding */ voiceSynthesizer;
    void /* unknown type, empty encoding */ safeguardTimer;
    void /* unknown type, empty encoding */ hashText;
    void /* unknown type, empty encoding */ hashStoppedText;
    void /* unknown type, empty encoding */ speakingState;
    void /* unknown type, empty encoding */ stopInDelay;
    void /* unknown type, empty encoding */ stopProcessing;
    void /* unknown type, empty encoding */ audioModeSet;
}

- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeechUtterance:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
