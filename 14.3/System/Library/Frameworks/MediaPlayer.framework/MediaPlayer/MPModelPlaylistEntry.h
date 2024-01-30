@class MPModelTVEpisode, MPModelMovie, MPModelPlaylist, MPModelSocialPerson, MPArtworkCatalog, MPModelSong;

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) long long position;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;

+ (id)__movie_KEY;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsLibraryRemoval;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (id)__tvEpisode_KEY;
+ (id)__position_KEY;
+ (id)__socialContributor_KEY;
+ (id)___artworkCatalog_KEY;
+ (id)kindWithKinds:(id)a0;
+ (id)__song_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__playlist_KEY;

- (struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)anyObject;
- (long long)type;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;

@end
