@class NSString, CNWallpaper, CNContactImage, NSData;

@interface CNMeCardSharingResult : NSObject

@property (readonly, nonatomic) NSString *givenName;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) CNContactImage *contactImage;
@property (readonly, nonatomic) CNWallpaper *wallpaper;
@property (readonly, nonatomic) NSData *watchWallpaperImageData;
@property (readonly, nonatomic) BOOL didSaveImageToMeCard;

- (id)description;
- (void).cxx_destruct;
- (id)initWithGivenName:(id)a0 familyName:(id)a1 contactImage:(id)a2 wallpaper:(id)a3 watchWallpaperImageData:(id)a4 didSaveImageToMeCard:(BOOL)a5;

@end
