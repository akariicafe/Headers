@class NSURL, NSString;

@interface WKLiveWallpaper : WKAbstractWallpaper <WKFileBasedWallpaper>

@property (copy, nonatomic) NSURL *thumbnailImageURL;
@property (copy, nonatomic) NSURL *fullsizeImageURL;
@property (copy, nonatomic) NSURL *videoAssetURL;
@property (nonatomic) double stillTimeInVideo;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long backingType;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(long long)a0 name:(id)a1 thumbnailImageURL:(id)a2 fullsizeImageURL:(id)a3 videoAssetURL:(id)a4 stillTimeInVideo:(double)a5;
- (id /* block */)descriptionBuilderBlock;

@end
