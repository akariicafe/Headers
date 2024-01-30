@class NSArray, NSString, CSLPRFTwoWaySyncSetting, NSMutableDictionary, CSLPRFObservationHelper;
@protocol CSLPRFPerApplicationSettings, CSLPRFApplicationLibrary;

@interface CSLPRFPerApplicationSettingsModel : NSObject <CSLPRFApplicationLibraryObserving, CSLPRFTwoWaySyncSettingDelegate, CSLPRFPerApplicationSettingsDelegate> {
    id<CSLPRFApplicationLibrary> _applicationLibrary;
    Class _perApplicationSettingsClass;
    CSLPRFObservationHelper *_observationHelper;
    CSLPRFTwoWaySyncSetting *_syncedSettings;
    NSMutableDictionary *_lock_settings;
    id<CSLPRFPerApplicationSettings> _lock_globalSettings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSArray *allApplicationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (id)globalSettings;
- (void)removeObserver:(id)a0;
- (void)didUpdateSettings:(id)a0;
- (void).cxx_destruct;
- (id)resolvedSettingsForApplication:(id)a0;
- (id)_globalSettingsForCustomizedSettings:(id)a0;
- (void)_processAddedOrUpdatedApplications:(id)a0;
- (void)applicationLibrary:(id)a0 didAddApplications:(id)a1;
- (void)applicationLibrary:(id)a0 didRemoveApplications:(id)a1;
- (void)applicationLibrary:(id)a0 didUpdateApplications:(id)a1;
- (id)initWithApplicationLibrary:(id)a0 perApplicationSettingsClass:(Class)a1;
- (id)resolvedSettingsForBundleIdentifier:(id)a0;
- (id)settingsForApplication:(id)a0;
- (id)settingsForBundleIdentifier:(id)a0;
- (void)twoWaySyncSettingDidUpdate:(id)a0;

@end
