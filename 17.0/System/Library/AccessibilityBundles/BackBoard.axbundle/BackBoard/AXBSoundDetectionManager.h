@class AXUIClient, NSString, VOSCommandManager;

@interface AXBSoundDetectionManager : NSObject <AXUIClientDelegate>

@property (retain, nonatomic) AXUIClient *soundDetectionClient;
@property (retain, nonatomic) VOSCommandManager *commandManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;
+ (void)initializeManager;

- (id)init;
- (void)dealloc;
- (void)_bootstrapSoundDetection;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldArmSoundRecognition;
- (BOOL)_shouldArmVoiceTriggers;
- (void)_soundDetectionSettingsDidUpdate;
- (void)_startupSoundDetectionUIServer;
- (void)_turnOnHearingControlCenterModule;

@end
