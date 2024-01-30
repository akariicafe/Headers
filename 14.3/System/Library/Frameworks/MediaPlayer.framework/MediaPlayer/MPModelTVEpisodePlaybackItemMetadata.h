@class MPModelTVEpisode, MPModelGenericObject;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelTVEpisode *episode;

+ (id)requiredProperties;

- (id)albumArtistName;
- (void).cxx_destruct;
- (id)artistName;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)contentType;
- (long long)artistStoreAdamID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExplicitTrack;
- (long long)storeAdamID;
- (id)modelGenericObject;
- (id)albumTitle;
- (id)mediaItem;
- (id)storeAsset;
- (id)contentTitle;
- (long long)albumStoreAdamID;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (double)expectedDuration;
- (unsigned long long)storeSagaID;
- (id)localFileAsset;
- (id)playbackPosition;
- (void)_invalidateModelObjectPlaybackItemMetadata;

@end
