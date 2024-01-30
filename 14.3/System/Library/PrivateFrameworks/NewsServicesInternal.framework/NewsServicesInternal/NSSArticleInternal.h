@class UIImage, NSString, NSDate;

@interface NSSArticleInternal : NSObject <NSCoding>

@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, nonatomic) UIImage *publisherLogoImage;
@property (readonly, nonatomic) UIImage *publisherLogoMaskImage;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSString *publisherName;

+ (id)imageWithURL:(id)a0;
+ (void)articleFromNotificationUserInfo:(id)a0 thumbnailFileURL:(id)a1 publisherLogoFileURL:(id)a2 publisherLogoMaskFileURL:(id)a3 completion:(id /* block */)a4;
+ (void)_articleFromCoreSpotlightIdentifier:(id)a0 domain:(id)a1 completion:(id /* block */)a2;
+ (void)articleFromNotification:(id)a0 completion:(id /* block */)a1;
+ (BOOL)coreSpotlightIdentifierRepresentsArticleIdentifier:(id)a0;
+ (void)articleFromCoreSpotlightIdentifier:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithThumbnailImage:(id)a0 title:(id)a1 shortExcerpt:(id)a2 publishDate:(id)a3 publisherName:(id)a4 publisherLogoImage:(id)a5 publisherLogoMaskImage:(id)a6;

@end
