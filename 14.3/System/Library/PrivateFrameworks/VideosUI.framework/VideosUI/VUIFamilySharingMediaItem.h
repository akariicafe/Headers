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

- (id)releaseDate;
- (id)episodeNumber;
- (id)storeID;
- (id)seasonNumber;
- (id)bookmark;
- (void).cxx_destruct;
- (id)contentDescription;
- (id)contentRating;
- (id)duration;
- (id)genreTitle;
- (id)releaseYear;
- (id)showTitle;
- (id)title;
- (id)initWithAMSEntity:(id)a0 requestedProperties:(id)a1;
- (id)extrasURL;
- (id)seasonCanonicalID;
- (id)showCanonicalID;
- (id)seasonIdentifier;
- (id)_itunesExtrasDictionary;
- (id)_bestRedownloadOffer;
- (id)_bestOffer;
- (id)showIdentifier;

@end
