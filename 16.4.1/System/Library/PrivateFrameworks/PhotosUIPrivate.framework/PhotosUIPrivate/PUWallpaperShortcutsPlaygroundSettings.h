@class NSString;

@interface PUWallpaperShortcutsPlaygroundSettings : PXSettings <PHPickerViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *selectedConfigurationUUID;
@property (retain, nonatomic) NSString *selectedAssetIdentifier;
@property (nonatomic) BOOL useAssetURL;
@property (nonatomic) BOOL smartCropEnabled;
@property (nonatomic) BOOL previewEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)_runActionWithModuleController:(id)a0 photoLibrary:(id)a1;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)_handleLoadFileURL:(id)a0;

@end
