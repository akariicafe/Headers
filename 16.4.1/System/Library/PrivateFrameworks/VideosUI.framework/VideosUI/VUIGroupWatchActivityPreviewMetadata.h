@class NSString, NSURL, TVImageProxy;

@interface VUIGroupWatchActivityPreviewMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *imageUrlFormat;
@property (readonly, copy, nonatomic) TVImageProxy *imageProxy;
@property (readonly, nonatomic) struct CGImage { } *artworkImage;
@property (readonly, copy, nonatomic) NSURL *fallbackUrl;

+ (id)metadataFromSerializedData:(id)a0;

- (id)serializedData;
- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 imageUrlFormat:(id)a2 artworkImage:(struct CGImage { } *)a3 fallbackUrl:(id)a4;
- (id)initWithMediaItem:(id)a0 fallbackUrl:(id)a1 isSeasonTitleEnabled:(BOOL)a2;
- (id)initWithPlayable:(id)a0 fallbackUrl:(id)a1 isSeasonTitleEnabled:(BOOL)a2;
- (id)initWithTitle:(id)a0 showTitle:(id)a1 seasonTitle:(id)a2 seasonNumber:(id)a3 episodeNumber:(id)a4 imageUrlFormat:(id)a5 artworkImage:(struct CGImage { } *)a6 fallbackUrl:(id)a7 isTVShow:(BOOL)a8 isSeasonTitleEnabled:(BOOL)a9;
- (id)localizedSubtitleForSeasonNumber:(id)a0 episodeNumber:(id)a1;

@end
