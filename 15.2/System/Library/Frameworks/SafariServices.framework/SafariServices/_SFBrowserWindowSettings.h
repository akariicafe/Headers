@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject {
    NSMutableDictionary *_settingsDictionary;
    BOOL _synchronizeScheduled;
}

@property (readonly, nonatomic) BOOL hasPrivateBrowsingWindow;
@property (nonatomic) BOOL invalidatesClosedWindows;

+ (id)settings;
+ (void)setSharedSettings:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)synchronize;
- (void)_initializeSettingsDictionaryIfNeeded;
- (id)_numberForKey:(id)a0 windowUUID:(id)a1;
- (id)_stringForKey:(id)a0 windowUUID:(id)a1;
- (BOOL)_boolValueForKey:(id)a0 windowUUID:(id)a1;
- (void)_setBool:(BOOL)a0 forKey:(id)a1 windowUUID:(id)a2;
- (void)_setString:(id)a0 forKey:(id)a1 windowUUID:(id)a2;
- (void)_synchronizeNow;
- (void)validateWindowSettingsWithUUIDs:(id)a0;
- (BOOL)privateBrowsingEnabledForWindowWithUUID:(id)a0;
- (void)setPrivateBrowsingEnabled:(BOOL)a0 forWindowWithUUID:(id)a1;
- (BOOL)activeDocumentIsValidForWindowWithUUID:(id)a0;
- (void)setActiveDocumentIsValid:(BOOL)a0 forWindowWithUUID:(id)a1;
- (BOOL)isShowingTabViewForWindowWithUUID:(id)a0;
- (void)setIsShowingTabView:(BOOL)a0 forWindowWithUUID:(id)a1;
- (id)blankSnapshotGroupIdentifierForPrivateBrowsing:(BOOL)a0 forWindowWithUUID:(id)a1;
- (void)setBlankSnapshotGroupIdentifier:(id)a0 forPrivateBrowsing:(BOOL)a1 forWindowWithUUID:(id)a2;
- (void)removeWindowWithUUID:(id)a0;

@end
