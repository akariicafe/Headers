@class MPModelMovie, MPModelGenericObject;

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelMovie *movie;

+ (id)requiredProperties;

- (void).cxx_destruct;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)contentType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExplicitTrack;
- (long long)storeAdamID;
- (id)modelGenericObject;
- (id)mediaItem;
- (id)storeAsset;
- (id)contentTitle;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (double)expectedDuration;
- (unsigned long long)storeSagaID;
- (id)localFileAsset;
- (id)playbackPosition;
- (void)_invalidateModelObjectPlaybackItemMetadata;

@end
