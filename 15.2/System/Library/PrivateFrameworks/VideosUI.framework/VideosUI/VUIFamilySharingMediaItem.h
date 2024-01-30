@class VUIFamilySharingRelationships, NSString, VUIExtrasInfo, VUIFamilySharingEntity, VUIVideosPlayable, VUIFamilySharingMediaItemAssetController;

@interface VUIFamilySharingMediaItem : VUIMediaItem

@property (retain, nonatomic) VUIFamilySharingEntity *entity;
@property (retain, nonatomic) VUIFamilySharingMediaItemAssetController *assetController;
@property (retain, nonatomic) NSString *artworkURL;
@property (retain, nonatomic) NSString *previewArtworkURL;
@property (retain, nonatomic) VUIExtrasInfo *iTunesExtrasInfo;
@property (retain, nonatomic) VUIFamilySharingRelationships *relationships;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSString *buyParams;
@property (retain, nonatomic) NSString *personalizedBuyParams;

- (id)seasonNumber;
- (id)storeID;
- (id)releaseDate;
- (id)episodeNumber;
- (id)contentDescription;
- (id)title;
- (id)bookmark;
- (id)showTitle;
- (id)contentRating;
- (void).cxx_destruct;
- (id)duration;
- (id)releaseYear;
- (id)genreTitle;
- (id)initWithAMSEntity:(id)a0 requestedProperties:(id)a1;
- (id)extrasURL;
- (id)seasonCanonicalID;
- (id)showCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;
- (id)_itunesExtrasDictionary;
- (id)_bestRedownloadOffer;
- (id)_bestOffer;

@end
