@class _TVContentRating, NSString, VUIFamilySharingRelationships, WLKOfferListing, NSDate, NSNumber, VUIMediaEntityType;

@interface VUIFamilySharingEntity : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) VUIMediaEntityType *type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *showTitle;
@property (retain, nonatomic) NSString *genreTitle;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *iTunesExtrasUrl;
@property (retain, nonatomic) NSString *previewArtworkURL;
@property (retain, nonatomic) NSString *standardDescription;
@property (retain, nonatomic) NSNumber *seasonNumber;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (retain, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) _TVContentRating *contentRating;
@property (retain, nonatomic) VUIFamilySharingRelationships *relationships;
@property (retain, nonatomic) WLKOfferListing *offerListing;
@property (retain, nonatomic) WLKOfferListing *personalizedOfferListing;

- (void).cxx_destruct;

@end
