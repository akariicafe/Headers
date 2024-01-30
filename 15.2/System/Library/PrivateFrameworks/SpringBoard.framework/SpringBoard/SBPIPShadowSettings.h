@class SBDropShadowSettings;

@interface SBPIPShadowSettings : PTSettings

@property (retain, nonatomic) SBDropShadowSettings *bodyShadowSettings;
@property (retain, nonatomic) SBDropShadowSettings *tabShadowSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;

@end
