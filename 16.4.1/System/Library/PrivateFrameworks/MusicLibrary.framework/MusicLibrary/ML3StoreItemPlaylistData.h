@class NSData, NSArray;

@interface ML3StoreItemPlaylistData : NSObject {
    NSArray *_lookupItems;
    NSData *_playlistData;
    NSArray *_parsedPlaylistsImportProperties;
}

@property (readonly, nonatomic) NSData *playlistsData;
@property (readonly, nonatomic) NSArray *parsedStorePlaylistsImportProperties;
@property (readonly, nonatomic) unsigned long long playlistCount;

- (void).cxx_destruct;
- (id)initWithLookupItems:(id)a0;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)a0 cropStyle:(id)a1;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)a0;
- (id)_playlistPropertiesForLookupItems:(id)a0;
- (id)_playlistPropertiesFromPlaylistData:(id)a0;
- (id)initWithPlaylistsData:(id)a0;

@end
