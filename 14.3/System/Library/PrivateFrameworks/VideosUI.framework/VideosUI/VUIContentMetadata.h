@class NSString, NSDictionary, NSDate, NSNumber;

@interface VUIContentMetadata : NSObject {
    NSDictionary *_metadataDictionary;
    NSDictionary *_contentTypeMap;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *mediaDescription;
@property (readonly, nonatomic) NSString *artworkURLFormat;
@property (readonly, nonatomic) NSNumber *artworkWidth;
@property (readonly, nonatomic) NSNumber *artworkHeight;
@property (readonly, nonatomic) NSString *previewFrameURLFormat;
@property (readonly, nonatomic) NSNumber *previewFrameWidth;
@property (readonly, nonatomic) NSNumber *previewFrameHeight;
@property (readonly, nonatomic) NSString *showArtworkURLFormat;
@property (readonly, nonatomic) NSNumber *showArtworkWidth;
@property (readonly, nonatomic) NSNumber *showArtworkHeight;
@property (readonly, nonatomic) NSString *ratingName;
@property (readonly, nonatomic) NSString *ratingAuxiliaryName;
@property (readonly, nonatomic) NSString *ratingSystem;
@property (readonly, nonatomic) NSString *ratingDomain;
@property (readonly, nonatomic) NSDate *releasedDate;
@property (readonly, nonatomic) NSString *formattedReleaseDate;
@property (readonly, nonatomic) NSDate *rentalExpiration;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *tomatoPercentage;
@property (readonly, nonatomic) unsigned long long tomatoFreshness;
@property (readonly, nonatomic) NSNumber *commonSenseRecommendedAge;
@property (readonly, nonatomic) NSNumber *videoResolutionClass;
@property (readonly, nonatomic) NSNumber *videoDynamicRange;
@property (readonly, nonatomic) NSNumber *hasClosedCaptions;
@property (readonly, nonatomic) NSNumber *hasADLocales;
@property (readonly, nonatomic) NSNumber *hasSDHLocales;
@property (readonly, nonatomic) NSNumber *hasDolbyAtmos;
@property (readonly, nonatomic) NSString *showTitle;
@property (readonly, nonatomic) NSString *seasonTitle;
@property (readonly, nonatomic) NSNumber *seasonNumber;
@property (readonly, nonatomic) NSNumber *episodeNumber;
@property (readonly, nonatomic) NSNumber *episodeIndexInSeries;
@property (readonly, nonatomic) BOOL isAdultContent;
@property (readonly, nonatomic) NSNumber *ratingValue;
@property (readonly, nonatomic) NSString *showCanonicalId;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
