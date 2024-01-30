@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntrySongPlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;

+ (id)requiredProperties;

- (id)song;
- (void)setSong:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)modelGenericObject;
- (void)_invalidateModelObjectPlaybackItemMetadata;

@end
