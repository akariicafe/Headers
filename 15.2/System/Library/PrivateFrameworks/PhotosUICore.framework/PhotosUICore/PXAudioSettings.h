@interface PXAudioSettings : PXSettings

@property (nonatomic) BOOL workaround80278485;
@property (nonatomic) BOOL flexReturnOnlyLocalSongs;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (void)purgeFlexDataFromModuleController:(id)a0;

- (void)setDefaultValues;
- (id)parentSettings;

@end
