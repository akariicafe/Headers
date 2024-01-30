@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL keyboardPlaysSounds;
@property (nonatomic) BOOL systemHapticsEnabled;
@property (nonatomic) BOOL buttonsCanChangeRingerVolume;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
