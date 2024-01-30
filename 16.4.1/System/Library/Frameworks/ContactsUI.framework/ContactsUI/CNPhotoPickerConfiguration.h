@interface CNPhotoPickerConfiguration : NSObject

@property (class, readonly, nonatomic) CNPhotoPickerConfiguration *defaultConfiguration;
@property (class, readonly, nonatomic) CNPhotoPickerConfiguration *contactsConfiguration;
@property (class, readonly, nonatomic) CNPhotoPickerConfiguration *gameCenterConfiguration;

@property (readonly, nonatomic) BOOL includeContactImage;
@property (readonly, nonatomic) BOOL includeUnifiedContactImages;
@property (readonly, nonatomic) BOOL includeFaces;
@property (readonly, nonatomic) BOOL includeMonograms;
@property (readonly, nonatomic) BOOL includeAnimoji;
@property (readonly, nonatomic) BOOL includeRecents;
@property (readonly, nonatomic) BOOL includeEmoji;
@property (readonly, nonatomic) BOOL allowPhotoCapture;
@property (readonly, nonatomic) BOOL allowPhotoFromLibrary;
@property (readonly, nonatomic) BOOL allowAnimojiCreation;
@property (readonly, nonatomic) BOOL allowRotation;

- (id)configurationBySettingAllowsPhotoCapture:(BOOL)a0;
- (id)initWithIncludeContactImage:(BOOL)a0 includeUnifiedContactImages:(BOOL)a1 includeFaces:(BOOL)a2 includeMonograms:(BOOL)a3 includeAnimoji:(BOOL)a4 includeRecents:(BOOL)a5 includeEmoji:(BOOL)a6 allowPhotoCapture:(BOOL)a7 allowPhotoFromLibrary:(BOOL)a8 allowAnimojiCreation:(BOOL)a9 allowRotation:(BOOL)a10;

@end
