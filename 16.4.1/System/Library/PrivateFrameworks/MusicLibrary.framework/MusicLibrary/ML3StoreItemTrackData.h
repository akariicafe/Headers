@class NSData, NSArray, NSDateFormatter;

@interface ML3StoreItemTrackData : NSObject {
    NSArray *_lookupItems;
    NSData *_trackData;
    NSArray *_parsedStoreItemsImportProperties;
    NSDateFormatter *_storePlatformDateFormatter;
}

@property (readonly, nonatomic) NSData *trackData;
@property (readonly, nonatomic) NSArray *parsedStoreItemsImportProperties;
@property (readonly, nonatomic) unsigned long long trackCount;

- (void).cxx_destruct;
- (id)initWithLookupItems:(id)a0;
- (BOOL)_platformMetadataItemIsAUCKind:(id)a0;
- (id)_allSongItemsFromCollectionLookupItem:(id)a0;
- (id)_allSongItemsFromLookupItems:(id)a0;
- (id)_artworkTokenForItemWithCollectionID:(long long)a0 itemID:(long long)a1;
- (id)_artworkTokenFromLookupItem:(id)a0;
- (id)_bestAlbumArtworkImageURLFromStoreArtworkVariants:(id)a0;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)a0 cropStyle:(id)a1;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)a0;
- (long long)_episodeTypeFromVideoSubTypeString:(id)a0;
- (id)_importDictionaryForLookupItem:(id)a0 parentCollectionCache:(id)a1;
- (id)_lookupItemArtworksForArtworkDictionaries:(id)a0;
- (id)_parentDictForItemAlbumId:(id)a0;
- (BOOL)_platformMetadataItem:(id)a0 matchesKind:(id)a1;
- (BOOL)_platformMetadataItemIsAUCAudioKind:(id)a0;
- (BOOL)_platformMetadataItemIsAUCVideoKind:(id)a0;
- (BOOL)_platformMetadataItemIsMovieKind:(id)a0;
- (BOOL)_platformMetadataItemIsMusicKind:(id)a0;
- (BOOL)_platformMetadataItemIsMusicVideoKind:(id)a0;
- (BOOL)_platformMetadataItemIsSongKind:(id)a0;
- (BOOL)_platformMetadataItemIsTVShowKind:(id)a0;
- (BOOL)_platformMetadataItemIsVideoKind:(id)a0;
- (double)_songDurationFromOffersArray:(id)a0;
- (id)_storeItemsImportPropertiesFromLookupItems:(id)a0;
- (id)_storeItemsImportPropertiesFromTrackData:(id)a0;
- (id)_storePlatformDateFormatter;
- (id)initWithTrackData:(id)a0;

@end
