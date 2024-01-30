@class MPPropertySet, MPModelStorePlatformMetadataGenericObjectBuilder;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {
    MPModelStorePlatformMetadataGenericObjectBuilder *_storePlatformBuilder;
    struct { unsigned char initialized : 1; unsigned char trackNumber : 1; unsigned char trackCount : 1; struct { unsigned char identifiers : 1; unsigned char bookmarkTime : 1; unsigned char shouldRememberBookmarkTime : 1; unsigned char hasBeenPlayed : 1; unsigned char startTime : 1; unsigned char stopTime : 1; unsigned char storeUbiquitousIdentifier : 1; unsigned char userPlayCount : 1; } playbackPosition; } _requestedSongProperties;
}

@property (readonly, copy, nonatomic) MPPropertySet *requestedProperties;

- (void).cxx_destruct;
- (id)initWithRequestedProperties:(id)a0;
- (id)genericObjectForRadioStationTrack:(id)a0 radioStationContainsVideo:(BOOL)a1 containerUniqueID:(id)a2 userIdentity:(id)a3;

@end
