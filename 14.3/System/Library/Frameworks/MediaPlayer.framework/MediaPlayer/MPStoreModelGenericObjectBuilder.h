@class MPStoreModelPlaylistBuilder, MPStoreModelMovieBuilder, MPStoreModelAlbumBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVShowBuilder, NSMapTable, MPStoreModelArtistBuilder;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {
    NSMapTable *_baseContentItemIDToOccurrenceCount;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;
    MPStoreModelTVShowBuilder *_tvShowBuilder;
}

@property (nonatomic) BOOL shouldUsePlaylistEntry;

- (void).cxx_destruct;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:(id)a0;
- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
