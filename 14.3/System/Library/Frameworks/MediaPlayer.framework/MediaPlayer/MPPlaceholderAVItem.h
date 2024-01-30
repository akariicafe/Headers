@class NSString;

@interface MPPlaceholderAVItem : MPAVItem

@property (nonatomic, getter=isTailPlaceholder) BOOL tailPlaceholder;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *artist;
@property (nonatomic) double durationFromExternalMetadata;
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (nonatomic, getter=isLikedStateEnabled) BOOL likedStateEnabled;
@property (retain, nonatomic) NSString *mainTitle;
@property (nonatomic) BOOL supportsLikedState;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (BOOL)isPlaceholder;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)loadAssetAndPlayerItem;
- (BOOL)isValidPlayerSubstituteForItem:(id)a0;

@end
