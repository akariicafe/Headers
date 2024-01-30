@interface PXAudioSettings : PXSettings

@property (nonatomic) BOOL workaround80278485;
@property (nonatomic) BOOL flexReturnOnlyLocalSongs;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)purgeFlexDataFromModuleController:(id)a0;

- (id)parentSettings;
- (void)setDefaultValues;

@end
