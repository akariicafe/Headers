@class NSString;

@interface PXAlbumsDebugUISettings : PXSettings

@property (nonatomic) BOOL showBestKeyFrameDebugAlbum;
@property (nonatomic) BOOL showUtilitiesDebugAlbum;
@property (nonatomic) BOOL showDreamyDebugAlbum;
@property (nonatomic) BOOL showCustomDebugAlbum;
@property (copy, nonatomic) NSString *customDebugAlbumTitle;
@property (copy, nonatomic) NSString *customDebugInternalPredicate;
@property (copy, nonatomic) NSString *customDebugPredicate;

+ (id)sharedInstance;
+ (id /* block */)_predicateValidatorUsingInternalPredicate:(BOOL)a0;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
