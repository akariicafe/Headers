@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntrySongPlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;

+ (id)requiredProperties;

- (id)song;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (void)setSong:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)modelGenericObject;

@end
