@class NSString, AFAudioPowerUpdater, VSSpeechSynthesizer;
@protocol AFUIPowerLevelListenerDelegate;

@interface AFUIPowerLevelListener : NSObject <AFAudioPowerUpdaterDelegate> {
    id<AFUIPowerLevelListenerDelegate> _powerLevelListenerDelegate;
    AFAudioPowerUpdater *_outputAudioPowerUpdater;
    VSSpeechSynthesizer *_synthesizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)audioPowerUpdaterDidUpdate:(id)a0 averagePower:(float)a1 peakPower:(float)a2;
- (long long)_frequency;
- (id)initWithDelegate:(id)a0;
- (void)beginListeningToSpeechSynthesizer:(id)a0;
- (void)endListening;

@end
