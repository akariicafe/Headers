@class MPModelSong, MPModelGenericObject;

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelSong *song;

+ (id)requiredProperties;

- (id)albumArtistName;
- (id)copyrightText;
- (void).cxx_destruct;
- (id)artistName;
- (long long)storeSubscriptionAdamID;
- (id)homeSharingAsset;
- (unsigned long long)contentType;
- (float)volumeNormalization;
- (long long)artistStoreAdamID;
- (unsigned long long)hash;
- (id)composerName;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExplicitTrack;
- (long long)storeAdamID;
- (id)modelGenericObject;
- (id)albumTitle;
- (id)mediaItem;
- (BOOL)showComposer;
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
