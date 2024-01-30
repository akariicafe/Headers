@class NSDictionary;

@interface SBExternalDisplayDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSDictionary *displayModeSettingsMap;
@property (nonatomic) unsigned int arrangementEdge;
@property (nonatomic) double arrangementOffset;
@property (nonatomic, getter=isMirroringEnabled) BOOL mirroringEnabled;
@property (nonatomic) unsigned long long externalDisplayEducationReasons;
@property (nonatomic) double contentsScale;
@property (nonatomic) BOOL allowWirelessDisplaysForExtendedDisplayMode;
@property (nonatomic) BOOL chamois_97748869;

- (id)description;
- (void)_bindAndRegisterDefaults;
- (void)_saveDisplaySettingsMapToStore:(id)a0;
- (id)_constructDisplaySettingsMap;
- (id)displayModeSettingsForDisplay:(id)a0;
- (id)observeDisplayModeSettingsOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)resetPrototypeSettingAdjustableDefaults;
- (void)setDisplayModeSettings:(id)a0 forDisplaysMatchingPredicates:(id)a1;

@end
