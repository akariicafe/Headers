@class MPModelMediaClip, MPModelArtist, MPModelSong, MPModelCurator, MPModelMovie, MPModelTVSeason, MPModelTVShowCreator, NSString, MPModelTVEpisode, MPModelRadioStation, MPModelTVShow, MPModelSocialPerson, MPModelPlaylist, MPModelAlbum;

@interface MPModelStoreBrowseContentItem : MPModelObject

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *artistUploadedContentType;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelCurator *curator;
@property (retain, nonatomic) MPModelMediaClip *mediaClip;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (retain, nonatomic) MPModelSocialPerson *socialPerson;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *episode;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelTVShowCreator *showCreator;
@property (nonatomic) long long detailedItemType;

+ (id)__artist_KEY;
+ (id)__movie_KEY;
+ (id)__album_KEY;
+ (id)__socialPerson_KEY;
+ (id)__itemType_KEY;
+ (id)__radioStation_KEY;
+ (id)__show_KEY;
+ (id)__detailedItemType_KEY;
+ (id)__song_KEY;
+ (id)__episode_KEY;
+ (id)__season_KEY;
+ (id)__artistUploadedContentType_KEY;
+ (id)__curator_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__playlist_KEY;
+ (id)__showCreator_KEY;
+ (id)__mediaClip_KEY;

- (id)innerObject;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;

@end
