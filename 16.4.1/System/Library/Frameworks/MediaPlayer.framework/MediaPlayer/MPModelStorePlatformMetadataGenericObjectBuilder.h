@class MPPropertySet, MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder;

@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject {
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPPropertySet *_storeAssetProperties;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    struct { unsigned char initialized : 1; unsigned char title : 1; unsigned char duration : 1; unsigned char trackNumber : 1; unsigned char trackCount : 1; unsigned char discNumber : 1; unsigned char grouping : 1; unsigned char explicit : 1; unsigned char artistUploadedContent : 1; unsigned char hasVideo : 1; unsigned char artwork : 1; unsigned char copyrightText : 1; unsigned char keepLocalEnableState : 1; unsigned char keepLocalManagedStatus : 1; unsigned char keepLocalManagedStatusReason : 1; unsigned char keepLocalConstraints : 1; unsigned char hasCloudSyncSource : 1; unsigned char localFileAsset : 1; unsigned char libraryAdded : 1; unsigned char libraryAddEligible : 1; unsigned char shouldShowComposer : 1; unsigned char volumeNormalization : 1; unsigned char year : 1; unsigned char userRating : 1; unsigned char cloudStatus : 1; unsigned char gaplessInfo : 1; unsigned char volumeAdjustment : 1; unsigned char traits : 1; unsigned char supportsExtendedLyricsAttribute : 1; unsigned char isFavorite : 1; unsigned char dateFavorited : 1; unsigned char classicalWork : 1; unsigned char classicalMovement : 1; unsigned char classicalMovementCount : 1; unsigned char classicalMovementNumber : 1; struct { unsigned char identifiers : 1; unsigned char title : 1; unsigned char releaseDate : 1; unsigned char year : 1; unsigned char artist : 1; } album; struct { unsigned char identifiers : 1; unsigned char name : 1; } artist; struct { unsigned char identifiers : 1; unsigned char name : 1; } composer; struct { unsigned char identifiers : 1; unsigned char name : 1; } genre; struct { unsigned char identifiers : 1; } homeSharingAsset; struct { unsigned char identifiers : 1; unsigned char text : 1; unsigned char hasStoreLyrics : 1; unsigned char hasTimeSyncedLyrics : 1; } lyrics; } _requestedSongProperties;
}

@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties;

- (void).cxx_destruct;
- (id)genericObjectForStorePlatformMetadata:(id)a0 radioStationContainsVideo:(BOOL)a1 userIdentity:(id)a2;
- (id)initWithRequestedProperties:(id)a0;

@end
