@class NSArray, NSMutableDictionary;
@protocol CARAppearanceManagerDelegate;

@interface CARAppearanceManager : NSObject

@property (weak, nonatomic) id<CARAppearanceManagerDelegate> delegate;
@property (retain, nonatomic) NSArray *screens;
@property (retain, nonatomic) NSMutableDictionary *appearanceModeDictionary;
@property (retain, nonatomic) NSMutableDictionary *appearanceModeSettingDictionary;
@property (retain, nonatomic) NSMutableDictionary *mapAppearanceModeDictionary;
@property (retain, nonatomic) NSMutableDictionary *mapAppearanceModeSettingDictionary;
@property (retain, nonatomic) NSMutableDictionary *nightModeDictionary;
@property (retain, nonatomic) NSMutableDictionary *currentEffectiveUIStyle;
@property (retain, nonatomic) NSMutableDictionary *currentEffectiveMapStyle;
@property (nonatomic) BOOL locationBasedNightMode;
@property (nonatomic) BOOL locationNightModeDisabled;

+ (long long)_carUserInterfaceStyleForAppearanceMode:(unsigned long long)a0;
+ (id)_descriptionForAppearanceSetting:(long long)a0;

- (void).cxx_destruct;
- (id)_mainScreenInfo;
- (void)_resolveMapsStylesAndNotify:(BOOL)a0;
- (void)_resolveUIStylesAndNotify:(BOOL)a0;
- (id)_screenInfoForScreenUUID:(id)a0;
- (void)_setInitialDisplayNightModeForScreen:(id)a0;
- (void)_setInitialMapAppearanceNumberForScreen:(id)a0;
- (void)_setInitialUIAppearanceNumberForScreen:(id)a0;
- (BOOL)effectiveGlobalNightMode;
- (long long)effectiveStyleForMapAppearanceForScreenUUID:(id)a0;
- (long long)effectiveStyleForUIAppearanceForScreenUUID:(id)a0;
- (void)handleLocationBasedNightModeUpdate:(BOOL)a0;
- (void)handleMapAppearanceUpdateWithParameters:(id)a0;
- (void)handleNightModeUpdateWithParameters:(id)a0;
- (void)handleUIAppearanceUpdateWithParameters:(id)a0;
- (id)initWithScreens:(id)a0 initialSystemNightMode:(BOOL)a1 initialLocationBasedNightMode:(BOOL)a2 delegate:(id)a3;
- (void)setDisableLocationNightMode;

@end
