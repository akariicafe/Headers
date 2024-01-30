@class MPModelMediaClip, MPModelArtist, MPModelGenre, MPModelSong, MPModelComposer, MPModelMovie, MPModelPodcast, MPModelTVSeason, MPModelCurator, MPModelTVEpisode, MPModelSocialPerson, MPModelRadioStation, MPModelTVShow, MPModelPodcastEpisode, MPModelPlaylistEntry, MPModelPlaylist, MPModelAlbum;

@interface MPModelGenericObject : MPModelObject

@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelMediaClip *mediaClip;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelPodcast *podcast;
@property (retain, nonatomic) MPModelPodcastEpisode *podcastEpisode;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (retain, nonatomic) MPModelComposer *composer;
@property (retain, nonatomic) MPModelGenre *genre;
@property (retain, nonatomic) MPModelCurator *curator;
@property (retain, nonatomic) MPModelSocialPerson *socialPerson;

+ (id)__artist_KEY;
+ (id)__movie_KEY;
+ (id)__album_KEY;
+ (id)__socialPerson_KEY;
+ (id)genericObjectWithModelObject:(id)a0;
+ (id)relationshipKeyForGenericObjectType:(long long)a0;
+ (id)__playlistEntry_KEY;
+ (id)__tvEpisode_KEY;
+ (id)__podcast_KEY;
+ (id)__podcastEpisode_KEY;
+ (id)kindWithRelationshipKinds:(id)a0;
+ (id)__radioStation_KEY;
+ (id)__show_KEY;
+ (id)__song_KEY;
+ (id)__season_KEY;
+ (id)__curator_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__composer_KEY;
+ (id)__genre_KEY;
+ (id)__playlist_KEY;
+ (id)__mediaClip_KEY;

- (id)identifiers;
- (id)mergeWithObject:(id)a0;
- (id)copyWithIdentifiers:(id)a0 block:(id /* block */)a1;
- (id)copyWithIdentifiers:(id)a0 propertySet:(id)a1;
- (id)flattenedGenericObject;
- (id)artworkCatalog;
- (id)anyObject;
- (long long)type;
- (id)humanDescription;
- (id)mediaItemPropertyValues;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;

@end
