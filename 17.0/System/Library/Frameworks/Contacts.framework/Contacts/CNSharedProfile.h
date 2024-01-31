@class NSString, CNWallpaper, NSData, CNContact;

@interface CNSharedProfile : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) NSString *imageType;
@property (retain, nonatomic) CNWallpaper *wallpaper;
@property (retain, nonatomic) NSData *watchWallpaperImageData;
@property (readonly, nonatomic) CNContact *contact;

+ (id)log;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)imageTypeStringFromContactImage:(id)a0;
- (id)initWithNickname:(id)a0;
- (id)initWithRecentContactImage:(id)a0 recentPoster:(id)a1;
- (id)thumbnailImageDataFromImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
