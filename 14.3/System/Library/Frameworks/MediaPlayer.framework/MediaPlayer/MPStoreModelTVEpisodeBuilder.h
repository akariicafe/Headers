@class MPPropertySet, MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelTVEpisodeBuilder : MPStoreModelObjectBuilder {
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct { unsigned char initialized : 1; unsigned char title : 1; unsigned char descriptionText : 1; unsigned char duration : 1; unsigned char artwork : 1; unsigned char screenshotArtwork : 1; unsigned char keepLocalEnableState : 1; unsigned char keepLocalManagedStatus : 1; unsigned char hasCloudSyncSource : 1; unsigned char localFileAsset : 1; unsigned char libraryAdded : 1; unsigned char libraryAddEligible : 1; unsigned char musicShow : 1; unsigned char episodeNumber : 1; unsigned char explicitRating : 1; struct { unsigned char identifiers : 1; unsigned char number : 1; unsigned char year : 1; struct { unsigned char identifiers : 1; unsigned char title : 1; struct { unsigned char identifiers : 1; unsigned char name : 1; unsigned char artwork : 1; } showCreator; } show; } season; struct { unsigned char identifiers : 1; unsigned char title : 1; struct { unsigned char identifiers : 1; unsigned char name : 1; unsigned char artwork : 1; } showCreator; } show; } _requestedEpisodeProperties;
}

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
