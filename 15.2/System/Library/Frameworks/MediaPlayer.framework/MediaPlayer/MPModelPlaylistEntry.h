@class MPModelTVEpisode, MPModelMovie, MPModelPlaylist, MPModelSocialPerson, MPArtworkCatalog, MPModelSong;

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;

+ (id)__song_KEY;
+ (long long)genericObjectType;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsLibraryRemoval;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (id)__playlist_KEY;
+ (id)__movie_KEY;
+ (id)__tvEpisode_KEY;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)___artworkCatalog_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)kindWithKinds:(id)a0;

- (id)humanDescription;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)anyObject;
- (long long)type;
- (id)mediaItemPropertyValues;

@end
