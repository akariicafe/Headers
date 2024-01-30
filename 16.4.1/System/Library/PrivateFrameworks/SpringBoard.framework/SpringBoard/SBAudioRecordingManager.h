@class SBApplication, SBSStatusBarStyleOverridesAssertion;

@interface SBAudioRecordingManager : NSObject

@property (retain, nonatomic) SBSStatusBarStyleOverridesAssertion *statusBarStyleOverrideAssertion;
@property (readonly, nonatomic) SBApplication *nowRecordingApplication;

- (void)_coverSheetDidPresent:(id)a0;
- (void)setNowRecordingAppForActiveAudioRecordingAttributions:(id)a0 callDescriptors:(id)a1;
- (void)_verifyBackgroundAudioActivityForApplication:(id)a0 withDelay:(BOOL)a1;
- (void)dealloc;
- (int)_pidForAttribution:(id)a0;
- (void)_removeStatusBarStyleOverrideAssertion;
- (BOOL)_callProviderAttributionExistsForAttribution:(id)a0 callDescriptors:(id)a1;
- (id)init;
- (double)_verificationDelayForApplication:(id)a0;
- (void).cxx_destruct;
- (void)verifyBackgroundAudioActivityForApplication:(id)a0;

@end
