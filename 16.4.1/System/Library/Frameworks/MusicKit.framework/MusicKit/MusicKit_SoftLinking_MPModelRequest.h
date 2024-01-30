@class MPModelRequest;

@interface MusicKit_SoftLinking_MPModelRequest : NSObject {
    MPModelRequest *_underlyingRequest;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPModelRequest *defaultUnpersonalizedRequest;

@property (readonly, nonatomic) MPModelRequest *_underlyingRequest;

+ (id)_playbackItemSupportedProperties;
+ (id)_playbackSectionSupportedProperties;
+ (id)_albumSupportedProperties;
+ (id)_albumSupportedPropertiesForPlayback;
+ (id)_artistSupportedProperties;
+ (id)_composerSupportedProperties;
+ (id)_genreSupportedProperties;
+ (id)_localFileAssetSupportedProperties;
+ (id)_movieSupportedProperties;
+ (id)_movieSupportedPropertiesForPlayback;
+ (id)_playbackPositionSupportedProperties;
+ (id)_playlistEntrySupportedProperties;
+ (id)_playlistEntrySupportedPropertiesForPlayback;
+ (id)_playlistSupportedProperties;
+ (id)_playlistSupportedPropertiesForPlayback;
+ (id)_propertySetForRawProperties:(id)a0 relationships:(id)a1;
+ (id)_radioStationSupportedPropertiesForPlayback;
+ (id)_recentlyAddedObjectSupportedProperties;
+ (id)_socialPersonSupportedProperties;
+ (id)_songSupportedProperties;
+ (id)_songSupportedPropertiesForPlayback;
+ (id)_storeAssetSupportedProperties;
+ (id)_supportedPropertiesForModelObjectType:(long long)a0;
+ (id)_tvEpisodeSupportedProperties;
+ (id)_tvEpisodeSupportedPropertiesForPlayback;
+ (id)_tvSeasonSupportedProperties;
+ (id)_tvSeasonSupportedPropertiesForPlayback;
+ (id)_tvShowSupportedProperties;

- (void).cxx_destruct;
- (id)_initWithUnderlyingRequest:(id)a0;

@end
