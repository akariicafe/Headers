@class NSString, NSDictionary, MusicKit_SoftLinking_MPArtworkCatalog, NSDate, NSNumber;

@interface MusicKit_SoftLinking_MPMusicPlayerItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSDictionary *artworkTokenParameters;
@property (readonly, copy, nonatomic) NSString *artworkDataSourceShortDescription;
@property (readonly, copy, nonatomic) NSString *artworkDataSourceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *artworkDictionary;
@property (readonly, copy, nonatomic) NSString *artworkVisualIdenticalityIdentifier;
@property (readonly, nonatomic) MusicKit_SoftLinking_MPArtworkCatalog *artworkCatalog;
@property (readonly, copy, nonatomic) NSString *underlyingItemIdentifier;
@property (readonly, nonatomic) BOOL isBackedByLibraryItem;
@property (readonly, copy, nonatomic) NSString *albumTitle;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *genreIdentifier;
@property (readonly, copy, nonatomic) NSString *genreName;
@property (readonly, copy, nonatomic) NSNumber *trackNumber;
@property (readonly, copy, nonatomic) NSNumber *discNumber;
@property (readonly, copy, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) BOOL isMusicVideo;
@property (readonly, copy, nonatomic) NSNumber *has4K;
@property (readonly, copy, nonatomic) NSNumber *hasHDR;
@property (readonly, copy, nonatomic) NSDictionary *playParametersDictionary;

+ (id)playerItemForMediaItem:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithMediaItem:(id)a0;
- (void)_initializeBasicPropertiesWithMediaItem:(id)a0;
- (void)_initializeArtworkPropertiesWithMediaItem:(id)a0;
- (void)_initializeAdditionalAttributesWithMediaItem:(id)a0;

@end
