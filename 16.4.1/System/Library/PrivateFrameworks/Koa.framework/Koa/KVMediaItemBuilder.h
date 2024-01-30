@class KVItemBuilder, NSMutableArray;

@interface KVMediaItemBuilder : NSObject {
    KVItemBuilder *_builder;
    NSMutableArray *_fields;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)albumArtistItemWithName:(id)a0 itemId:(id)a1;
- (id)albumItemWithName:(id)a0 itemId:(id)a1 albumArtistId:(id)a2;
- (id)audioBookArtistItemWithName:(id)a0 itemId:(id)a1;
- (id)audioBookItemWithName:(id)a0 itemId:(id)a1 artistId:(id)a2;
- (id)genreItemWithName:(id)a0 itemId:(id)a1;
- (id)movieItemWithName:(id)a0 itemId:(id)a1;
- (id)musicVideoItemWithName:(id)a0 itemId:(id)a1 albumArtistId:(id)a2 songArtistId:(id)a3 albumId:(id)a4 genreId:(id)a5;
- (id)playlistItemWithName:(id)a0 itemId:(id)a1;
- (id)songArtistItemWithName:(id)a0 itemId:(id)a1;
- (id)songItemWithName:(id)a0 itemId:(id)a1 albumArtistId:(id)a2 songArtistId:(id)a3 albumId:(id)a4 genreId:(id)a5;
- (id)tvEpisodeItemWithName:(id)a0 itemId:(id)a1 showId:(id)a2;
- (id)tvShowItemWithName:(id)a0 itemId:(id)a1;
- (id)_buildMediaItemWithId:(id)a0 otherFields:(id)a1;

@end
