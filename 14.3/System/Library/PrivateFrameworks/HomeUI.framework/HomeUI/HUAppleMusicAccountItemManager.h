@class HUAppleMusicAccountModule, HUPrimaryUserSettingsItemModule;
@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountItemManager : HFItemManager

@property (retain, nonatomic) HUAppleMusicAccountModule *appleMusicAccountModule;
@property (retain, nonatomic) HUPrimaryUserSettingsItemModule *primaryUserSettingsItemModule;
@property (nonatomic) BOOL shouldDisableUpdates;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;

- (id)initWithMediaProfileContainer:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_buildItemModulesForHome:(id)a0;
- (void)_moduleStateDidChangeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (BOOL)_showPrimaryUserSettings;

@end
