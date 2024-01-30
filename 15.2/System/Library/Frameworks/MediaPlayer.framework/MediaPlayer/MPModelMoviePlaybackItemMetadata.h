@class MPModelMovie, MPModelGenericObject;

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelMovie *movie;

+ (id)requiredProperties;

- (long long)storeSubscriptionAdamID;
- (unsigned long long)contentType;
- (BOOL)isExplicitTrack;
- (id)contentTitle;
- (unsigned long long)storeSagaID;
- (id)storeAsset;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (id)localFileAsset;
- (id)playbackPosition;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (long long)storeAdamID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mediaItem;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)modelGenericObject;

@end
