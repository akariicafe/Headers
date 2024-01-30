@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;

+ (id)requiredProperties;

- (void).cxx_destruct;
- (id)episode;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)modelGenericObject;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (void)setEpisode:(id)a0;

@end
