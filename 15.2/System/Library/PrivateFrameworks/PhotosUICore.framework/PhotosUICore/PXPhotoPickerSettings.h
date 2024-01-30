@interface PXPhotoPickerSettings : PXSettings

@property (nonatomic) BOOL applyChromelessEverywhere;
@property (nonatomic) BOOL hideSearchBarWhenScrolling;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
