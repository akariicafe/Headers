@class MPModelSong, MPModelGenericObject;

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}

@property (retain, nonatomic) MPModelSong *song;

+ (id)requiredProperties;

- (id)artistName;
- (id)albumArtistName;
- (id)composerName;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)contentType;
- (BOOL)isExplicitTrack;
- (id)contentTitle;
- (unsigned long long)storeSagaID;
- (id)albumTitle;
- (id)storeAsset;
- (BOOL)showComposer;
- (long long)albumStoreAdamID;
- (BOOL)allowsInitiatingPlayWhileDownload;
- (id)artworkCatalogForPlaybackTime:(double)a0;
- (id)localFileAsset;
- (id)playbackPosition;
- (void)_invalidateModelObjectPlaybackItemMetadata;
- (id)homeSharingAsset;
- (float)volumeNormalization;
- (long long)storeAdamID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mediaItem;
- (long long)artistStoreAdamID;
- (id)copyrightText;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)modelGenericObject;

@end
