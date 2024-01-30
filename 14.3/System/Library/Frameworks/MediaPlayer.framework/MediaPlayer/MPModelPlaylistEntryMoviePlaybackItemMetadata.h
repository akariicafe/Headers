@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;

+ (id)requiredProperties;

- (id)movie;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)modelGenericObject;
- (void)setMovie:(id)a0;
- (void)_invalidateModelObjectPlaybackItemMetadata;

@end
