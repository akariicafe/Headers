@class NSString, AFAudioPowerUpdater, NSMutableSet;
@protocol SUICVoicePreviewingDelegate;

@interface SUICDefaultVoicePreviewer : NSObject <AFAudioPowerUpdaterDelegate, SUICVoicePreviewing> {
    AFAudioPowerUpdater *_outputAudioPowerUpdater;
    NSMutableSet *previewSessions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<SUICVoicePreviewingDelegate> delegate;

- (void)dealloc;
- (void)stopVoicePreview;
- (void).cxx_destruct;
- (void)audioPowerUpdaterDidUpdate:(id)a0 averagePower:(float)a1 peakPower:(float)a2;
- (void)_beginAudioPowerUpdatesIfNecessary;
- (void)_endAudioPowerUpdates;
- (void)previewVoice:(id)a0 completion:(id /* block */)a1;

@end
