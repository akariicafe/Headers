@class SBSystemNotesSwipeMetricSettings, SBCornerPencilPanGestureSettings, SBPIPStashVisualSettings, SBPIPShadowSettings, SBSystemNotesInteractionSettings, SBSystemNotesLaunchSettings, SBSystemNotesAppearanceSettings, SBCornerFingerPanGestureSettings;

@interface SBSystemNotesSettings : PTSettings

@property (retain, nonatomic) SBSystemNotesAppearanceSettings *appearanceSettings;
@property (retain, nonatomic) SBSystemNotesLaunchSettings *launchSettings;
@property (retain, nonatomic) SBPIPStashVisualSettings *stashVisualSettings;
@property (retain, nonatomic) SBPIPShadowSettings *shadowSettings;
@property (retain, nonatomic) SBSystemNotesInteractionSettings *interactionSettings;
@property (retain, nonatomic) SBSystemNotesSwipeMetricSettings *cornerSwipeMetricSettings;
@property (retain, nonatomic) SBCornerPencilPanGestureSettings *pencilSwipeGestureTuningSettings;
@property (retain, nonatomic) SBCornerFingerPanGestureSettings *fingerSwipeGestureTuningSettings;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
