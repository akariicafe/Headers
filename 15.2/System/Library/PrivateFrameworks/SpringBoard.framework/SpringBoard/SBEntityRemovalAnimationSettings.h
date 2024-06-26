@class SBEntityRemovalFloatingSlideOutDownwardAnimationSettings, SBEntityRemovalMedusaSlideOutUpwardAnimationSettings, SBEntityRemovalDosidoSlideOutUpwardAnimationSettings, SBEntityRemovalMedusaSlideOutDownwardAnimationSettings, SBEntityRemovalDosidoDefaultAnimationSettings, SBEntityRemovalFloatingSlideOutUpwardAnimationSettings, SBEntityRemovalDosidoSlideOutDownwardAnimationSettings, SBEntityRemovalMedusaDefaultAnimationSettings, SBEntityRemovalFloatingDefaultAnimationSettings;

@interface SBEntityRemovalAnimationSettings : PTSettings

@property (retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *medusaDeleteIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *medusaCommitIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *medusaDeclineIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalFloatingDefaultAnimationSettings *floatingDeleteIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *floatingCommitIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *floatingDeclineIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *dosidoDeleteIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *dosidoCommitIntentAnimationSettings;
@property (retain, nonatomic) SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *dosidoDeclineIntentAnimationSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;

@end
