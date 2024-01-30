@class MPModelTVEpisode, MPModelGenericObject;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelTVEpisode *episode;

+ (id)requiredProperties;

- (id)artistName;
- (id)albumArtistName;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)contentType;
- (BOOL)isExplicitTrack;
- (id)contentTitle;
- (unsigned long long)storeSagaID;
- (id)albumTitle;
- (id)storeAsset;
- (long long)albumStoreAdamID;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (id)localFileAsset;
- (id)playbackPosition;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (long long)storeAdamID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mediaItem;
- (long long)artistStoreAdamID;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)modelGenericObject;

@end
