@class NSString, NSArray, UIImage, NSData, CNWallpaper;

@interface CNVisualIdentity : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSString *abbreviatedName;
@property (retain, nonatomic) NSString *shortenedDisplayName;
@property (retain, nonatomic) NSData *imageHash;
@property (nonatomic) NSString *imageType;
@property (readonly, nonatomic) unsigned long long contactImageType;
@property (readonly, nonatomic) long long contactImageSource;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSArray *linkedContacts;
@property (readonly, nonatomic) BOOL hasLinkedContacts;
@property (nonatomic) long long identityType;
@property (retain, nonatomic) NSData *memojiMetadata;
@property (retain, nonatomic) CNWallpaper *wallpaper;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (retain, nonatomic) NSData *fullscreenImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (id)abbreviatedNameForGroupName:(id)a0;
+ (id)descriptorForImageKeys;
+ (id)firstComposedCharacterFromString:(id)a0;

- (void)clearImage;
- (id)initWithContact:(id)a0;
- (id)wallpaperType;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canUpdateGroupName;
- (void)clearImageAndWallpaper;
- (void)clearWallpaper;
- (BOOL)hasImageDataAvailable;
- (BOOL)imageAllowsEditing;
- (id)initWithGroupIdentity:(id)a0;
- (void)updateContactWithGivenName:(id)a0 familyName:(id)a1;
- (void)updateGroupName:(id)a0;
- (void)updateImageForContact:(id)a0;
- (void)updateImageType:(unsigned long long)a0;

@end
