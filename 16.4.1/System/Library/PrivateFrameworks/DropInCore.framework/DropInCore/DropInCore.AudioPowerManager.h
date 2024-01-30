@interface DropInCore.AudioPowerManager : NSObject <TUAudioFrequencyControllerDelegate> {
    void /* unknown type, empty encoding */ registeredStreamTokens;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ audioFrequencyController;
}

- (void)frequencyController:(id)a0 audioPowerChanged:(float)a1 forParticipantWithStreamToken:(long long)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
