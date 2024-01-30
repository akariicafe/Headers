@interface PXPhotoPickerSettings : PXSettings

@property (nonatomic) BOOL useLibraryPresentation;
@property (nonatomic) BOOL useGadgetsAlbumsTab;
@property (nonatomic) BOOL hideSearchBarWhenScrolling;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
